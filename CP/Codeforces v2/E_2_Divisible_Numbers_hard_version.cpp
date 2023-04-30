#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a, b, c, d;

bool check(ll x, ll y){
    if(x > a && x <= c && y > b && y <= d && !((x * y) % (a * b))) return 1;
    else return 0;
}

void solve(){
    cin >> a >> b >> c >> d;
    vector<pair<ll, ll>>diva, divb;
    ll A = a, m = a * b;
    for(int i = 1; i * i <= A; i += 1){
        if(!(A % i)){
            diva.emplace_back(i, A / i);
            if(i != A / i) diva.emplace_back(A / i, i);
        }
    }
    ll B = b;
    for(int i = 1; i * i <= B; i += 1){
        if(!(B % i)){
            divb.emplace_back(i, B / i);
            if(i != B / i) divb.emplace_back(B / i, i);
        }
    }
    for(int i = 0; i < diva.size(); i += 1){
        for(int j = 0; j < divb.size(); j += 1){
            ll x1 = diva[i].first * divb[j].first, x2 = diva[i].second * divb[j].second;
            if(((a / x1) < (c / x1)) &&  ((b / x2) < (d / x2))){
                cout << (c / x1) * x1 << " " << (d / x2) * x2 << '\n'; 
                return;
            }
        }
    }
    cout << - 1 << " " << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}