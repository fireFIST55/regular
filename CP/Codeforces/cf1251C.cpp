#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    deque<char>khela[2];

    for(char ch: s) khela[(ch - 'a')&1].push_back(ch);

    string ans;
    while(!khela[0].empty() || !khela[1].empty()){
        char ch1 = 'A', ch2 = 'A';
        ch1 = khela[0].empty()?ch1: khela[0].front();
        ch2 = khela[1].empty()?ch2: khela[1].front();
        if(ch1 < ch2){
            ans += ch1;
            khela[0].pop_front();
        }
        else{
            ans += ch2;
            khela[1].pop_front();
        }
    }

    cout << ans << '\n';
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