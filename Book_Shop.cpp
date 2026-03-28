#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n , x ; 
    cin>>n>>x;
    vector<int> price(n),pages(n);
    fr(i,n){cin>>price[i];}
    fr(i,n){cin>>pages[i];}

    vector<int> dp(x+1,0);
    for (int i = 0; i < n; i++) {           // For each book
    for (int j = x; j >= price[i]; j--) { // For each budget 
        dp[j] = max(dp[j], pages[i] + dp[j - price[i]]);
        }
    }
    cout<<dp[x]<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}