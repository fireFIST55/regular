#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i += 1){
        if(!(n % i)) return 0;
    }
    return 1;
}

void solve(){
    int n; cin >> n;
    if(!(n&1)){
        if(n == 2) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
    else{
        if(isPrime(n)) cout << 1 << '\n';
        else if(isPrime(n - 2)) cout << 2 << '\n';
        else cout << 3 << '\n';
    }
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