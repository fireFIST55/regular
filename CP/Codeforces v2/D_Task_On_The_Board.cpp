#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    vector<vector<int>>calc;
    while(1){
        vector<int>khela;
        for(int i = 0; i < n; i += 1){
            if(vc[i]) continue;
            khela.push_back(i);
        }
        if(khela.empty()) break;
        for(int i = 0; i < n; i += 1){
            if(!vc[i]) vc[i] = INT_MAX;
            else{
                for(int d: khela)
                    vc[i] -= abs(d - i);
            }
        }
    }
    map<char, int>cnt;
    for(char ch: s) cnt[ch] += 1;
    auto j = cnt.rbegin();
    string t(n, '?');
    for(auto c: calc){
        if(c.size() > j -> second) j++;
        for(int index: c) t[index] = j -> first;  
        j++;
    }
    cout << t << '\n';
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