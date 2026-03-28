#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> temp;

    for (int i = 0; i < n; i++) {
        auto it = lower_bound(temp.begin(), temp.end(), arr[i]);

        if (it == temp.end()) {
            temp.push_back(arr[i]);   // extend LIS
        } else {
            *it = arr[i];             // replace to keep smallest ending
        }
    }

    cout << temp.size() << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}