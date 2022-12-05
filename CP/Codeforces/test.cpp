#include<bits/stdc++.h>
#define ll long long
using namespace std;

void bin(int a){
    for(int i = log(a); i >= 0; i -= 1){
        cout << ((a & (1 << i))?"1": "0");
    }
}
void solve(){
    int a, b; cin >> a >> b;
    bin(a); cout << "-> "; bin(2 * a);
    bin(b); cout << "\n"; bin((2 * a - b));
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