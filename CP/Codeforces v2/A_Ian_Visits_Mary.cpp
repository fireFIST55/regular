#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    cout << 2 << '\n';
    int x, y;
    if(a > 1) x = a - 1, y = a;
    else x = a + 1, y = a + 2;
    cout << x << ' ' << y << '\n' << a << ' ' << b << '\n';
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