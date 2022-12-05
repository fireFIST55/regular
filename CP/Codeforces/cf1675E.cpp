#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    char mx = 'a';
    for(int i = 0; i < n; i += 1){
        int x = s[i] - 'a';

        if(x <= k) mx = max(mx, s[i]);
        else{
            k -= (mx - 'a');
            char ch = s[i] - k; int y = ch - 'a';
            for(int j = i; j < n; j += 1){
                int a = s[j] - 'a';
                if(a > y && a <= x) s[j] = ch;
            }

            break;
        }
    }

    for(int i = 0; i < n; i += 1){
        if(s[i] <= mx) cout << 'a';
        else cout << s[i];
    }

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