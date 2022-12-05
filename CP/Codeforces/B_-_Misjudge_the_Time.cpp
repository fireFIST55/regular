#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int h, m; cin >> h >> m;
    auto isValid = [&](int hour, int mint){
        int hh, mm; 
        mm = mint % 10; hh = hour % 10; hour /= 10; hour = hour * 10 + (mint / 10);
        mint = hh * 10 + mm;
        if(hour <= 23 && hour >= 0 && mint <= 59 && mint >= 0) return 1;
        else return 0;
    };

    int hr = h;
    for(int i = m; ; i += 1){
        if(i == 60) i = 0, hr += 1;
        if(isValid(hr % 24, i)){
            cout << hr % 24 << " " << i << '\n';
            return;
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}