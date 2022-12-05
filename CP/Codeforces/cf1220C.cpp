#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    char curr;
    for(int i = 0; s[i]; i += 1){
        if(i){
            if(curr < s[i]) cout << "Ann\n";
            else cout << "Mike\n";

            curr = min(curr, s[i]);
        }
        else{
            cout << "Mike\n";
            curr = s[i];
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