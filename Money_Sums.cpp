#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum = 0;
    fr(i,n){cin>>v[i];sum+=v[i];}
    vector<bool> dp(sum+1,false);
    dp[0] = true;
    for (int c : v) {
        for (int i = sum; i >= c; i--) {
            if (dp[i - c]) dp[i] = true;
        }
    }
    vector<int>result;
    for(int i =1;i<=sum;i++){
        if(dp[i]){
            result.push_back(i);
        }
    }
    cout<<result.size()<<endl;
    for(auto r:result){
        cout<<r<<" ";
    }
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}