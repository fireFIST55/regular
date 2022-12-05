#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n; cin >> n >> s;
    vector<int>khela;
    for(int i = 0; i < n; i += 1){
        int cnt = 0, j = i;
        while(j < n && s[i] == s[j]){
            cnt += 1; j += 1;
        }

        i = j - 1; khela.push_back(cnt); 
    }

    int saved = 0; n = khela.size();
    bool nai = 0;
    for(int l = 0, r = n; l <= r;){
        saved += 1;
        if(nai){
            l += 1;
            r -= 1; continue;
        }
        int index = upper_bound(khela.begin() + l, khela.begin() + r, 1) - khela.begin(); l += 1;
        if(index == n){
            nai = 1; r -= 1; 
            continue; 
        }

        khela[index] -= 1;
    }
    cout << saved << '\n';
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