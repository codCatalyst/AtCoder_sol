#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, n) for (int i = 0; i < (int)(n); i++)

void reset(vector<int> &v,int ind){
    int n = v.size();
    int x = v[ind];
    for(int i = ind+1;i<n;i++){
        v[i-1]=v[i];
    }
    v[n-1] = x;
}

void solve(){

    int n , k,p,m;
    cin>>n>>k>>p>>m;
    vector<int> v(n);
    fr(i,n) cin>>v[i];
    int win_card_pos = p-1;  
    int count = 0;

    while(m>0){

        if(win_card_pos >= k){

            int x = v[0];
            int ind = 0;
            for(int i =1;i<k;i++){
                if(v[i] < x){
                    x = v[i];
                    ind = i;
                }
            }

            if(m < x) break;
            m -= x;
            reset(v,ind);
            if(ind < win_card_pos) win_card_pos--;
        }
        else{
            int cost = v[win_card_pos];
            if(m < cost) break;
            m -= cost;
            count++;
            reset(v,win_card_pos);
            win_card_pos = n-1;
        }
    }

    cout<<count<<endl;
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