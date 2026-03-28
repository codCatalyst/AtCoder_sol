#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)


void solve(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<string,int> mp;
    mp[s]++;
    for(int i = 0;i<n-1;i++){
        mp[s]++;
        mp[s.substr(i+1,n-1)]++;
        swap(s[i],s[i+1]);
        mp[s.substr(i+1,n-1)]++;
    }
    cout<<mp.size()<<endl;

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