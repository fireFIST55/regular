#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool no = 0;
    string s; cin >> s;
    vector<int>freq(26);
    
    for(int i = 0; s[i]; i += 1){
        if(s[i] == 'R' || s[i] == 'G' || s[i] == 'B'){
            if(!freq[s[i] - 'A']) no = 1;
            freq[s[i] - 'A'] += 1;
        }
        else freq[s[i] - 'a'] += 1;
    }

    no?cout << "NO\n": cout << "YES\n";
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