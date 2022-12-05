#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%7){
        int x = n%7, last = n%10;
        if(last - x < 0) cout << n + (7 - x) << '\n';
        else cout << n - x << '\n';
    }
    else cout << n << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}