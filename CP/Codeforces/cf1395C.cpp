#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>a(n), b(m);
    for(int &i: a)  cin >> i;
    for(int &i: b)  cin >> i;

    for(int curr = 0; curr < (1<<9); curr += 1){
        for(int i = 0; i < n; i += 1){
            bool found = 0;
            for(int j = 0; j < m; j += 1){
                if(((a[i]&b[j])|curr) == curr){
                    found = 1; break;
                }
            }

            if(!found) break;
            else if(i == n - 1){
                cout << curr << '\n';
                return;
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}