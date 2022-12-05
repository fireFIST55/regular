#include<bits/stdc++.h>
#define ll long long
using namespace std;

int x1, Y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
bool check(int x, int y){
    bool yes = 1;
    if(min(x3, x4) <= x && max(x3, x4) >= x && min(y3, y4) <= y && max(y3, y4) >= y) yes = 0;
    if(min(x5, x6) <= x && max(x5, x6) >= x && min(y5, y6) <= y && max(y5, y6) >= y) yes = 0;
    return yes; 
}

void solve(){
    cin >> x1 >> Y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    x1 *= 2; Y1 *= 2; x2 *= 2; y2 *= 2; x3 *= 2; y3 *= 2; x4 *= 2; y4 *= 2; x5 *= 2; y5 *= 2; x6 *= 2; y6 *= 2;
    for(int x = x1; x <= x2; x += 1){
        if(check(x, Y1) || check(x, y2)){
            cout << "YES\n";
            return;
        }
    }

    for(int y = Y1; y <= y2; y += 1){
        if(check(x1, y) || check(x2, y)){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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