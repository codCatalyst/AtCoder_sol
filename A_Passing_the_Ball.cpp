#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x = 0;
    for(int i =0;i<n;i++){
        if(s[i] == 'L'){
            x = i+1;
            break;
        }
    }
    cout<<x<<endl;

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