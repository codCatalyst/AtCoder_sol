#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void solve(){
    int a, b, c, m;
    cin>>a>>b>>c>>m;
    int a_b = lcm (a,b);
    int b_c = lcm(b,c);
    int a_c = lcm(a,c);
    int a_b_c = lcm(lcm(a,b),c);
    int a1 = m/a - m/a_b -m/a_c +m/a_b_c;
    int b1 = m/b - m/a_b -m/b_c +m/a_b_c;
    int c1 = m/c - m/b_c -m/a_c +m/a_b_c;
    int a1_b1 = m/a_b - m/a_b_c;
    int b1_c1 = m/b_c - m/a_b_c;
    int a1_c1 = m/a_c - m/a_b_c;
    int a1_b1_c1 = m/a_b_c;
    cout<<6*a1 + 3* (a1_b1 + a1_c1) + 2 *a1_b1_c1<<" "<<6*b1 + 3* (a1_b1 + b1_c1) + 2 *a1_b1_c1<<" "<<6*c1 + 3* (b1_c1 + a1_c1) + 2 *a1_b1_c1<<endl;
    
    

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