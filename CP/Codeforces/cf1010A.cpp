#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    double payload; cin >> n >> payload;
    vector<double>lift(n), land(n);
    for(double &i: lift) cin >> i;
    for(double &i: land) cin >> i;

    double l = 0, r = 1e9, ans = - 1;
    while(l <= r){
        double mid = (l + r)/(double)2, rem; rem = mid;
        for(int i = 0; i < n && rem >= 0; i += 1){
            if(!i) rem -= ((payload + rem)/lift[i]);
            else{
                rem -= ((payload + rem)/land[i]);
                if(rem >= 0)    rem -= ((payload + rem)/lift[i]);
            }

            if(i == n - 1 && rem >= 0) rem -= ((payload + rem)/land[0]);
        }

        if(rem >= 0){
            ans = mid - rem;
            if(!rem) break;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}