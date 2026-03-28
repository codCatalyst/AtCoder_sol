#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> cost(n),dp(n,0);
    fr(i,n){cin>>cost[i];}
    if(n>1){dp[1] = abs(cost[1]-cost[0]);
    for(int i = 2;i<n;i++){
        for(int j = 1;j<=k;j++){
        dp[i] = min(dp[i-j]+abs(cost[i]-cost[i-j]),dp[i]);}
      }
    }   
    
    cout<<dp[n-1]<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}