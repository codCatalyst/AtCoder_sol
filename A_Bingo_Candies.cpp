#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            mp[x]++;
        }
    }

    bool is_true = true;

    for(auto &p: mp){
        if(p.second > n*(n-1)){
            is_true= false;
            break;
        }
    }
    if(is_true){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
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