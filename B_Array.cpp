#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    fr(i, n) { cin >> v[i]; }

    vector<int> result(n);
    unordered_map<int, int> mp;

    for (int i = n - 1; i >= 0; i--) {
    int left = 0, right = 0;
    for (auto &[val, freq] : mp) {
        if (val < v[i]){ left += freq;}
        else if (val > v[i]){ right += freq;}
    }
    result[i] = max(left, right);
    mp[v[i]]++;
}

    fr(i, n) { cout << result[i] << " "; }
    cout << endl;
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