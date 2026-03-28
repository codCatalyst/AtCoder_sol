#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n, c;
    cin>>n>>c;
    vector<int> v(n);
    fr(i,n){cin>>v[i];v[i] = v[i] + i+1;}
    sort(v.begin(),v.end());
    int curr_sum  =0;
    int count = 0;
    for(int i = 1;i<n;i++){
        v[i] += v[i-1];
    }
    fr(i,n){if(v[i]<=c){count++;}}
    cout<<count<<endl;
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