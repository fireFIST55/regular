#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, t, dummy; cin >> s >> t;
    dummy = s;
    int n = s.length(), m = t.length();
    sort(dummy.begin(), dummy.end());
    deque<int>pos[26];

    for(int i = 0; i < n; i += 1) pos[s[i] - 'A'].push_back(i);

    for(int i = 0; i < n; i += 1){
        if(s[i] != dummy[i]){
            s[pos[dummy[i] - 'A'].back()] = s[i];
            s[i] = dummy[i];
            break;
        }

        pos[s[i] - 'A'].pop_front();
    }

    if(s.compare(t) >= 0) cout << "---\n";
    else    cout << s << '\n';
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