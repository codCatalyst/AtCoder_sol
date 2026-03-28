#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)


void solve(){
    int n , m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    fr(i,n){cin>>a[i];}
    fr(i,m){cin>>b[i];}
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); 
    vector<int>result;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (a[i] == b[j]) {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            result.push_back(a[i]);
            i++; j++;
        } else if (dp[i+1][j] >= dp[i][j+1]) {
            i++;
        } else {
            j++;
        }
    }
    cout<<dp[0][0]<<endl;
    fr(i,result.size()){cout<<result[i]<<" ";}
    cout<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}