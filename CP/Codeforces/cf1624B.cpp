#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a + c == 2*b){
        cout << "YES\n";
        return;
    }
    else{
        int x;
        x = 2*b - c;
        if(!(x%a) && x && x >= a){
            cout << "YES\n";
            return;
        }
        cout << "New a :\t" << x << endl;
        
        x = (a + c)/2;
        if(!(a + c)&1 && x >= b && x && !(x%b)){
            cout << "YES\n";
            return;
        }
        cout << "New b:\t" << x << endl;

        x = b*2 - a;
        if(!(x%c) && x && x >= c){
            cout << "YES\n";
            return;
        }
        cout << "New c:\t" << x << endl;
    }

    cout << "NO\n";
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