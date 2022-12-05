#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, cnt = 0, rem = 0; cin >> n >> s;
    for(int i = 0; i < n; i += 1){
        if(i + 1 < n){
            if(s[i] == s[i + 1] || s[i] == '(' && s[i + 1] == ')'){
                i += 1; cnt += 1;
            }
            else{
                rem = n - i; i += 1;
                while(i < n && s[i] == '(') i += 1;
                if(i < n){
                    cnt += 1; rem = 0;
                }
            }
        }
        else rem = 1;
    }

    cout << cnt << " " << rem << '\n';
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