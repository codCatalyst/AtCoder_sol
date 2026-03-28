#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    fr(i,n) cin >> a[i];
    fr(i,n) cin >> b[i];

    vector<pair<pair<int,int>, int>> x; 

    int l = 0, r = 1;
    while(r < n){
        if(b[r] >= b[r-1]){
            r++;
        } else {
            x.push_back({{l, r-1}, r-l});
            l = r;
            r++;
        }
    }
    x.push_back({{l, r-1}, r-l});

    sort(x.begin(), x.end(), [](auto &m, auto &n){
        return m.second < n.second;
    });
    auto it = x.back();
    cout << it.first.first+1 << " " << it.first.second+1<< endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}