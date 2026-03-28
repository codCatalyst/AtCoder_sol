#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){

    int n ;
    cin>>n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // The foundation

    for (int i = 1; i <= n; i++) {
        for (int die = 1; die <= 6; die++) {
            if (i - die >= 0) {
                dp[i] = (dp[i] + dp[i - die]) % 1000000007;
            }
        }
    }
    cout<<dp[n]<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}