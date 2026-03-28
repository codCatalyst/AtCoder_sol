#include <bits/stdc++.h>
using namespace std;
#define int long long

#define fr(i, n) for (int i = 0; i < (int)(n); i++)
double ans = 0;
void rec(int level, double total, int count, vector<double>& p) {
    if(level == p.size()) {
        if(count == 0) {
            // this total is one valid probability
            ans+=total;
        }
        return;
    }

    if(count > 0) {
        rec(level + 1, total * p[level], count - 1, p);
    }

    rec(level + 1, total * (1 - p[level]), count, p);
}


void solve(){
    int n ;
    cin>>n;
    vector<double> p(n);
    fr(i,n){cin>>p[i];}
    int m = n/2+1;
    double sum = 0;
    for(int i = m ;i<=n;i++){
        ans =0 ;
        rec(0,1,i,p);
        sum+= ans;
    }
cout << fixed << setprecision(10) << sum;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}