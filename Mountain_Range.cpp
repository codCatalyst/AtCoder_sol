#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
int n;
cin>>n;
vector<int> v(n);
fr(i,n){cin>>v[i];}
vector<int> dp(n,0);
for(int i =0;i<n;i++){
    for(int j = n;j>=0;j--){
        if(v[i] <= v[j]){
            dp[i] = max(dp[i],1+dp[j]);
        }
    }
}

// int result = *max_element(dp.begin(),dp.end());
// cout<<result<<endl;
for(auto a:dp){
    cout<<a<<" ";
}
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}