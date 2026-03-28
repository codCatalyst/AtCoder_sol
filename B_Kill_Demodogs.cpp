#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)
int M = 1e9+7;

void solve(){
    int n;
    cin>>n;
    cout<<((((n%M)*(n+1)%M)%M*(4*n-1)%M)%M*337%M)%M<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}