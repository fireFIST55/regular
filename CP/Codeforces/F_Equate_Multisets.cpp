#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    map<int, int>lagbe;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;  //cout << a << " ";
        while(!(a & (1 << 0))) a >>= 1;

        //cout << a << endl;
        lagbe[a] += 1;
    }
    //cout << endl;

    bool yes = 1;
    for(int i = 0; i < n; i += 1){
        int b; cin >> b; //cout << b << " ";
        while(b && !lagbe[b]) b >>= 1;
        //cout << b << endl;

        if(!lagbe[b]) yes = 0;
        else lagbe[b] -= 1;
    }

    yes?cout << "YES\n": cout << "NO\n";
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