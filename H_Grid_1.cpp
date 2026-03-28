#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)
int M = 1e9+7;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m,'.'));
    fr(i,n){
        fr(j,m){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> dp(n,vector<int>(m,0));
    for(int i = 1;i<n;i++){
        if(v[i][0] != '#')
        {dp[i][0] = 1;}
        else{break;}
    }
    for(int j = 1;j<m;j++){
        if(v[0][j] != '#')
        {dp[0][j] = 1;}
        else{break;}
    }
    for(int i = 1;i<n;i++){
        for(int j =1;j<m;j++){
            if(v[i][j] != '#'){
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%M;
            }
        }
    }
    if(v[0][0]!= '#'){
    cout<<dp[n-1][m-1]<<endl;}
    else{
        cout<<0<<endl;
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}