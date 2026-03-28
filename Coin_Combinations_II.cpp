#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

// int rec(int i, int k, vector<int>& v) {
//     if (k == 0) return 1;
//     if (k < 0 || i == v.size()) return 0;
//     return (rec(i, k - v[i], v) + rec(i + 1, k, v));
// }

// void solve(){
//     int n , k;
//     cin>>n>>k;
//     vector<int> v(n);
//     fr(i,n){cin>>v[i];}
//     cout<<rec(0,k,v)<<endl;
// }
int M = 1e9+7;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    fr(i,n){cin>>v[i];}
    vector<int> dp(k+1,0);
    dp[0] = 1;
    for(auto c:v){
        for(int i =0;i<=k;i++){
            if (i - c >= 0) {
            dp[i] += dp[i - c];
            if (dp[i] >= 1000000007) dp[i] -= 1000000007;
        }
        }
    }
    cout<< dp[k] << endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}