#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    deque<char>dch;

    int ans = 1, total = 0;
    for(int i = 0; i < 2 * n; i += 1){
        if(s[i] == ')') dch.pop_back();
        else dch.push_back(s[i]), total += 1;

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