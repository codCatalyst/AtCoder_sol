#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)
int M = 1e9+7;
int MAX = 1e6+1;
vector<int> f(MAX,0),g(MAX,0);
void precompute() {
    f[1] = 1;
    g[1] = 1;
    for(int i = 2; i < MAX; i++) {
        f[i] = (2 * f[i-1] + g[i-1]) % M;
        g[i] = (4 * g[i-1] + f[i-1]) % M;
    }
}

void solve() {
    int n;
    cin >> n;
    // STEP 2: JUST LOOK UP THE ANSWER
    cout << (f[n] + g[n]) % M << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precompute();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}