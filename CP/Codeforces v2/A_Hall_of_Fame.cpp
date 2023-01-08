#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    bool yes = 0;
    int ans = 0;
    for(int i = 1; i < n; i += 1){
        if(s[i] != s[i - 1]){
            yes = 1; 
            if(s[i - 1] == 'L' && s[i] == 'R'){
                ans = i;
            }
            break;
        }
    }
    cout << (yes?ans: - 1) << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}