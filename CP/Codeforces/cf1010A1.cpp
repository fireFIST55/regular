#include<bits/stdc++.h>
using namespace std;
#define dbl double

void solve(){
    bool no = 0;
    double payload, y = 1.0;
    int n; cin >> n >> payload;
    vector<dbl>land(n), lift(n);
    for(dbl &i: lift){
        cin >> i;   if(i == 1) no = 1;
    }
    for(dbl &i: land){
        cin >> i;   if(i == 1) no = 1;
    }

    if(no){
        cout << - 1;
        return;
    }
    dbl x = payload/(land[0] - y);
    for(int i = n - 1; i >= 0 && x >= 0;  i -= 1){
        if(i){
            x = (x*lift[i] + payload)/(lift[i] - y);
            if(x < 0){
                cout << - 1 << '\n';
                return;
            }
            x = (x*land[i] + payload)/(land[i] - y);
        }
        else x = (x*lift[i] + payload)/(lift[i] - y);
    } 

    if(x >= 0) printf("%lf", x);
    else printf("%lf", x);
}

int main(void){
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}