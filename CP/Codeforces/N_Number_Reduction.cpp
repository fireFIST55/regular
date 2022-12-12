#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; 
    int n, k; cin >> n >> k >> s;
    vector<int>pos[10]; n = s.length();
    for(int i = 0; i < n; i += 1) pos[s[i] - '0'].emplace_back(i);
    for(int i = 0; i < 10; i += 1) reverse(pos[i].begin(), pos[i].end());
    string ans;
    int last;
    for(int i = 0; i < n; i += 1){
        for(int dig = (i == 0); dig < 10; dig += 1){
            
        }
    }
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