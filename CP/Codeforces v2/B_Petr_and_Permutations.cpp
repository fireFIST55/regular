#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i, i -= 1;
    for(int i = 0; i < n; i += 1){
        if(vc[i] == - 1) continue;
        int x = i; ans ^= 1;
        while(x != - 1){
            int y = vc[x];
            vc[x] = - 1;
            x = y;
        }
    }
    cout << (ans?"Um_nik\n": "Petr\n");
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