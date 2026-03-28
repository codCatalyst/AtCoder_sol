#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int &x : v) {cin >> x;}
    int mx = LLONG_MIN;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(v[i] >= mx){
            count++;
            mx = v[i];
        }
    }
    cout<<count<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}