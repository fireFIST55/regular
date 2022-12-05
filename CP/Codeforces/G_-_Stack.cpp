#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll khela(ll a, ll b, char ch){
    ll x;
    if(ch == '+') x = a + b;
    else if(ch == '-') x = a - b;
    else if(ch == '/') x = a / b;
    else x = a * b;
    return x;
}

void solve(){
    string s;
    stack<ll>dq;
    while(cin >> s){
        if(s == "*" || s == "+" || s == "-" || s == "/"){
            char ch = s[0];
            ll a = dq.top(); dq.pop();
            ll b = dq.top(), ans = khela(b, a, ch); dq.pop();
            dq.push(ans);
        }
        else{
            ll a = stoi(s); dq.push(a);
        }
    }
    cout << dq.top() << '\n';
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