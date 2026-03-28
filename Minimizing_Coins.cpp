#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n, target;
    cin >> n >> target;
    vector<int> coins(n);
    for(int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(target + 1, 1e9); 
    dp[0] = 0; 

    for (int i = 1; i <= target; i++) {
        for (int c : coins) {
            if (i - c >= 0) {
                dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
    }

    if (dp[target] >= 1e9) cout << -1 << endl;
    else cout << dp[target] << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}