#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i += 1){
        if((i && s[i - 1] == 'L') || (i + 1 < n && s[i + 1] == 'L') || (s[i] != '.')) continue;
        s[i] = 'C';
    }
    cout << s << '\n';
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