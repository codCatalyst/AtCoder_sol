#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)
int MOD = 1e9+7;
void solve(){
    int n ;
    cin>>n;
    int sum = n*(n+1)/2;
    int target;
    if(sum%2 == 0){
        target = sum/2;
        vector<int> dp(target+1,0);
    //base case
    dp[0] = 1;
    for(int i = 1 ; i<n ;i++){
        for(int j = target; j>=i;j--){
                dp[j]=(dp[j]+dp[j-i])%MOD;
            
        }
    } 
    cout<<dp[target]<<endl;
    }else{
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