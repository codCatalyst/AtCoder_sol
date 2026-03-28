#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n ;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    fr(i,n){
        fr(j,n){
            cin>>v[i][j];
        }
    }

    vector<vector<string>> dp(n+1,vector<string>(n+1,""));
    //base case
    dp[0][0] = v[0][0];
    for(int i = 1;i<n;i++){
        dp[0][i] = dp[0][i-1]+v[0][i];
    }
    for(int i = 1;i<n;i++){
        dp[i][0] = dp[i-1][0]+v[i][0];
    }
    for(int i =1;i<n;i++){
        for(int j = 1;j<n;j++){
            dp[i][j] = min(dp[i-1][j],dp[i][j-1])+v[i][j];
        }
    }
    cout<<dp[n-1][n-1]<<endl;
    

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}