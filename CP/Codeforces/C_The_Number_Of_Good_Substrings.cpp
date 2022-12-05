#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5;

void solve(){
    string s; cin >> s;
    int n = s.length();
    vector<int>prefix(n), last(n);
    deque<int>khela;

    for(int i = 0; i < n; i += 1){
        if(s[i] == '1') khela.push_back(i);
        prefix[i] = (i?prefix[i - 1]: 0) + (s[i] == '0');
    }
    for(int i = n - 1; i >= 0; i -= 1){
        if(s[i] == '1') khela.pop_back();
        last[i] = khela.empty()?-1: khela.back();
    }

    int ans = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        ans += (s[i] == '1');
        if(last[i] == - 1) break;
        int x = s[i] == '1'?1: 0, j = last[i];
        while(j != - 1){
            x += (1 << (i - j));
            if(x > N) break;
            else{
                int y = x - (i - j + 1);
                if((j - 1 >= 0 && prefix[j - 1] - (j - y - 1 >= 0? prefix[j - y - 1]: 0) == y) || !y) ans += 1;
            }
            j = last[j];
        }
    }
    cout << ans << '\n';
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