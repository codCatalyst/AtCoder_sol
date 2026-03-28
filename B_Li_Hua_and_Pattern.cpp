#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> mat(n,vector<int>(n,0));
    fr(i, n) {
        fr(j, n) {
            cin>>mat[i][j];
        }
    }
    int cnt =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(mat[i][j] != mat[n-1-i][n-1-j]){
                cnt++;
            }
        }
    }
    int required_ops = cnt / 2;

    if (k < required_ops) {
        cout << "NO" << endl;
    } else {
        int remaining_ops = k - required_ops;
        if (n % 2 != 0 || remaining_ops % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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