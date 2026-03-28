#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    string s;
    cin >> s;
    int n = s.length();

    s.append(s);

    int l = 0, r = 0;
    int cnt = 0;

    while(r < s.length()){
        if(s[r] == '1'){
            r++;
        }
        else{
            cnt = max(cnt, r - l);
            r++;
            l = r;
        }
    }

    // handle case when string ends with '1'
    cnt = max(cnt, r - l);

    cnt = min(cnt, n); // important constraint

    if(cnt == n){
        cout << n * n << endl;
        return;
    }

    if(cnt % 2 == 0){
        cout << (cnt/2) * ((cnt/2) + 1) << endl;
    }
    else{
        int x = cnt/2;
        cout << (x + 1) * (x + 1) << endl;
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