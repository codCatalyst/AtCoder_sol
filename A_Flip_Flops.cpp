#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> v(n);
    fr(i, n) { cin >> v[i]; }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        if (v[i] <= c) {
            int can_add = min(k, c - v[i]); 
            c += (v[i] + can_add);
            k -= can_add;
        } else {
            break; 
        }
    }
    cout << c << endl;
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