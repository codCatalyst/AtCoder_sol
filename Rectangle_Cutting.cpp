#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int a,b;
    cin>>a>>b;
    vector<vector<int>> dp(a+1,vector<int>(b+1,1e8));
    for(int i =1;i<a+1;i++){
        for(int j = 1;j<b+1;j++){
            if(i==j){dp[i][j] = 0;}
            else{
                for(int k = 1;k<j;k++){
                    dp[i][j] = min(1+dp[i][k]+dp[i][j-k],dp[i][j]);
                }
                for(int k = 1;k<i;k++){
                    dp[i][j] = min(1+dp[k][j]+dp[i-k][j],dp[i][j]);
                }
            }
        }
    }
    cout<<dp[a][b]<<endl;    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}