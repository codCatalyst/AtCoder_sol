#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    fr(i,n){cin>>v[i];}

    int target = v[n-1], curr_len = 1, op = 0;
    int i = n-1;
    while(i>0){
        if(v[i-1] == target){
            curr_len ++;
            i = n-curr_len;
        }
        else{
            op++;
            curr_len *= 2;
            i = n-curr_len;
        }
    }
    cout<<op<<endl;

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