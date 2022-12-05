#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, k; cin >> n >> k >> s;
    vector<int>chosen(n);

    bool changed = 0;
    for(int i = 0; i < n; i += 1){
        s[i] = changed?(s[i] == '1'?'0': '1'): s[i];

        if(k > 0){
            if(s[i] == '1'){
                if(k&1){
                    chosen[i] += 1; k -= 1; changed = !changed;
                }
            }
            else{
                if(!(k&1) && i != n - 1){
                    s[i] = '1';
                    chosen[i] += 1; k -= 1; changed = !changed;
                }
            }
        }
    }

    chosen[n - 1] += k;
    cout << s << '\n';
    for(int i: chosen) cout << i << ' ';
    cout << '\n';
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