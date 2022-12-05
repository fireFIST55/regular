#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, one = 0, zero = 0;
    cin >> n >> s;
    for(char ch: s){
        one += (ch == '1'); zero += (ch == '0');
    }

    if(one > 1 || zero > 1) cout << "NO\n";
    else cout << "YES\n";
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