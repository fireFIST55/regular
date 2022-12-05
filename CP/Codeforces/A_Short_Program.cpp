#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, posx1 = 0, posx2 = 1023; cin >> n;
    for(int i = 0; i < n; i += 1){
        int a; char ch; cin >> ch >> a;
        if(ch == '&')   posx1 &= a, posx2 &= a;
        else if(ch == '|')  posx1 |= a, posx2 |= a;
        else posx1 ^= a, posx2 ^= a;
    }

    int an = 1023, xo = 0, o = 0;
    for(int i = 0; i < 10; i += 1){
        if((posx1 & (1 << i)) && (posx2 & (1 << i))) o |= (1 << i);
        else if(!(posx1 & (1 << i)) && !(posx2 & (1 << i))) an -= (1 << i);
        else if((posx1 & (1 << i)) && !(posx2 & (1 << i)))  xo |= (1 << i);
    }

    cout << "3\n" << "^ " << xo << '\n' << "| " << o << '\n' << "& " << an << '\n';
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