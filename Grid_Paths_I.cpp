#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    fr(i, n) fr(j, n) cin >> v[i][j];
    if (v[0][0] == '*' || v[n-1][n-1] == '*') {
        cout << 0 << endl;
        return;
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    int M = 1e9 + 7;

    dp[0][0] = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % M;
            if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % M;
        }
    }
    cout << dp[n-1][n-1] << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}