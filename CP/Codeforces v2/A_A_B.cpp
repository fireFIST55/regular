#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int a = (s[0] - 48) + (s[2] - 48); cout << a << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}