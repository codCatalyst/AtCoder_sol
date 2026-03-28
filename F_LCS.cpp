#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    string a,b;
    cin>>a;
    cin>>b;
    int n = a.size();
    int m = b.size();
    
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(int i =0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(i==0||j==0){
                dp[i][j] = 0;
            }
            else if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    int index = dp[n][m];
    // cout<<index<<endl;
    string res(index, ' ');
    int i = n,j=m;
    while(i>0 && j>0){
        if(a[i-1] == b[j-1]){
            res[index-1] = a[i-1];
            index--;
            i--;
            j--;
        }
        else if(dp[i-1][j] >= dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
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