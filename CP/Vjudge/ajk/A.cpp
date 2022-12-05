#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ll a;
    while(1){
        cin >> a;
        if(!a) break;
        ll b = 17;
        if(!(a % b)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    
    return 0;
}