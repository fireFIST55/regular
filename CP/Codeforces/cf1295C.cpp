#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, t; cin >> s >> t;
    vector<int>pos[26];
    int n = s.length();

    for(int i = 0; i < n; i += 1) pos[s[i] - 'a'].push_back(i);

    int m = t.length(), ans = 0;
    for(int i = 0; i < m; i += 1){
        int got, curr = - 1;
        do{
            got = - 1;
            if(pos[t[i] - 'a'].size()){
                int left = 0, right = pos[t[i] - 'a'].size() - 1, mid;

                while(left <= right){
                    mid = (left + right) >> 1;
                    if(pos[t[i] - 'a'][mid] > curr) right = mid - 1, got = pos[t[i] - 'a'][mid];
                    else left = mid + 1;
                }
            }
            else{
                cout << - 1 << '\n';
                return;
            }

            // cout << "i: " << t[i] << ' ' << got << endl;
            if(got != - 1) i += 1;
            curr = got;
        }while(got != -1 && i < m);
        // cout << endl << endl;

        ans += 1; i -= 1;
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