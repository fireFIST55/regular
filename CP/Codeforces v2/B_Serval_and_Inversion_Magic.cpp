#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0, j = n - 1; i < j; i += 1, j -= 1){
        if(s[i] != s[j]){
            int l = i, r = j;
            while(l + 1 < r - 1 && s[l + 1] != s[r - 1]){
                l += 1, r -= 1;
            }
            if(l < r){
                for(int k = j; k >= r; k -= 1){
                    s[k] = (s[k] == '1'?'0': '1');
                }
            }
            break;
        } 
    }
    for(int i = 0, j = n - 1; i < j; i += 1, j -= 1){
        if(s[i] != s[j]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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