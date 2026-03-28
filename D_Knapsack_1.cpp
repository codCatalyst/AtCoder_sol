#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n,W;
    cin>>n>>W;
    vector<vector<int>> v(n,vector<int>(2));
    fr(i,n){
        fr(j,2){
            cin>>v[i][j];
        }
    }
    vector<int> dp(W+1,-1);
    dp[0] = 0;
    for(int i =0;i<n;i++){
        for(int j = W;j>=v[i][0];j--){
            if(dp[j-v[i][0]] != -1){
                dp[j] = max(dp[j], dp[j-v[i][0]] + v[i][1]); 
            }
        }
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}