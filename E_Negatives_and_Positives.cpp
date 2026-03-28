#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n ;
    cin>>n;
    vector<int> v(n);
    int sum = 0;
    fr(i,n){cin>>v[i];sum+=abs(v[i]);}
    int cnt = 0;
    fr(i,n){if(v[i]<0){cnt++;}}
    int mini = LLONG_MAX;
    for(int i =0;i<n;i++){
        if(abs(v[i])<mini){
            mini = abs(v[i]);
        }
    }
    if(cnt%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum - 2*mini<<endl;
    }


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