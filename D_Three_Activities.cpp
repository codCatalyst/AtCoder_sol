#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

int rec(int i , int sum , vector<vector<int>> &v){
    if(i == v[0].size()){
        return sum;
    }
    return max(rec(i+1,sum,v),max(rec(i+1,sum+v[0][i],v),max(rec(i+1,sum+v[1][i],v),rec(i+1,sum+v[2][i],v))));
    
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3,0));
    fr(i,n){
        fr(j,n){
            cin>>v[i][j];
        }
    }
    cout<<rec(0,0,v)<<endl;
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