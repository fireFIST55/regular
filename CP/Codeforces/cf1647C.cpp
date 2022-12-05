#include<bits/stdc++.h>
#define ll long long
using namespace std;

class dummy{
public:
    int a, b, c, d;
};

void solve(){
    int n, m, ans = 0; cin >> n >> m;
    string s[n];
    dummy ansco[n*m];
    for(int i = 0; i < n; i += 1) cin >> s[i];

    for(int i = n - 1; i >= 0; i -= 1){
        for(int j = m - 1; j >= 0; j -= 1){
            if(s[i][j] == '1'){
                if(j){
                    ansco[ans].a = i; ansco[ans].b = j - 1; ansco[ans].c = i; ansco[ans].d = j;
                    ans += 1;
                }
                else if(i){
                    ansco[ans].a = i - 1; ansco[ans].b = j; ansco[ans].c = i; ansco[ans].d = j;
                    ans += 1;
                }
                else{
                    cout << - 1 << '\n';
                    return;
                }
            }
        }
    }

    cout << ans << '\n';
    for(int i = 0; i < ans; i += 1) cout << ansco[i].a + 1 << " " << ansco[i].b + 1 << " " << ansco[i].c + 1 << " " << ansco[i].d + 1 << '\n';
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