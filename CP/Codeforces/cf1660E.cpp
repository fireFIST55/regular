#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, one = 0; cin >> n;
    vector<int>col[n];
    string s[n];

    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        for(int k = 0; k < n; k += 1){
            if(s[i][k] == '1'){
                col[k].push_back(i); one += 1;
            }
        }
    }

    int got = 0;
    for(int i = 0; i < n; i += 1){
        for(int k = 0; k < col[i].size(); k += 1){
            int rw = col[i][k], curr = 0;
            for(int j = i, l = 0; l < n; l += 1, j += 1){
                if(s[(rw + l)%n][j%n] == '1') curr += 1;
            }

            got = max(got, curr);
        }
    }

    cout << one - got + (n - got) << '\n';
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