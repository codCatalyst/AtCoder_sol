#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)
int M = 1e9+7;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    fr(i,n){cin>>v[i];}
    vector<int> dp(k+1,0);
    dp[0] = 1;
    for (int i = 1; i <= k; i++) {
    for (int c : v) {
        if (i - c >= 0) {
            dp[i] += dp[i - c];
            if (dp[i] >= 1000000007) dp[i] -= 1000000007;
        }
    }
}

    cout<<dp[k]<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}