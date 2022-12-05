#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int q; cin >> s >> q;
    vector< set<int> > pos(26);

    for(int i = 0; s[i]; i += 1) pos[s[i] - 'a'].insert(i);

    for(int i = 0; i < q; i += 1){
        int option; cin >> option;

        if(option == 2){
            int l, r, ans = 0; cin >> l >> r;
            l -= 1; r -= 1;

            for(int k = 0; k < 26; k += 1){
                auto it = pos[k].lower_bound(l);
                if(it != pos[k].end() && *it <= r) ans += 1;
            }

            cout << ans << '\n';
        }
        else{
            char c;
            int p, ans = 0; cin >> p >> c;
            pos[s[--p] - 'a'].erase(p);
            s[p] = c;

            pos[c - 'a'].insert(p);
        }
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