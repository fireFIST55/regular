#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    deque<int>dq[26];
    for(int i = 0; s[i]; i += 1){
        dq[s[i] - 97].push_back(i);
    }

    int n = s.length(), moves = 0;
    for(int i = 0, j = 1; i < n;){
        // cout << i << " " << j << " moves " ;
        if(j < n && s[i] == s[j]){
            dq[s[i] - 97].pop_front(); dq[s[j] - 97].pop_front();
            i = j + 1; j += 2;
        }
        else if(j < n){
            dq[s[i] - 97].pop_front(); dq[s[j] - 97].pop_front();
            int x1 = dq[s[i] - 97].empty()?2*n: dq[s[i] - 97].front(), x2 = dq[s[j] - 97].empty()?2*n: dq[s[j] - 97].front();

            if(x1 - i <= x2 - j){
                j += 1;
                dq[s[i] - 97].push_front(i);
            }
            else{
                dq[s[j] - 97].push_front(j);
                i = j++;
            }

            moves += 1;
        }
        else{
            moves += 1; break;
        }

        // cout << moves << endl;
    }

    cout << moves << '\n';
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