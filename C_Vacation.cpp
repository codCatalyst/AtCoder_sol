#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

int rec(int i, int j, vector<vector<int>>& v, vector<vector<int>>& dp) {
    if (i == v.size()) {
        return 0;
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int ans = 0;
    for (int k = 0; k < 3; k++) {
        if (k != j) { 
            ans = max(ans, rec(i + 1, k, v, dp));
        }
    }

    return dp[i][j] = v[i][j] + ans;
}

void solve(){
    int n ;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3,0));
    for(int i =0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(3, -1));
    int res = 0;
    for (int j = 0; j < 3; j++) {
        res = max(res, rec(0, j, v,dp));
    }
cout<<res<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   solve();
    return 0;
}