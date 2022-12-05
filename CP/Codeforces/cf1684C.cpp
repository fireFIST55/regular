#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>jhamela;
    vector<vector<int>>vc(n, vector<int>(m, 0));
    for(int i = 0; i < n; i += 1){
        for(int &j: vc[i]) cin >> j;
    }

    for(int i = 0; i < n && jhamela.empty(); i += 1){
        vector<int>dummy = vc[i];
        sort(dummy.begin(), dummy.end());

        for(int k = 0; k < m; k += 1){
            if(dummy[k] != vc[i][k]){
                jhamela.push_back(k);
            }
        }
    }

    if(jhamela.empty()){
        cout << 1 << " " << 1 << '\n';
        return;
    }
    else if(jhamela.size() > 2){
        cout << - 1 << '\n';
        return;
    }

    for(int i = 0; i < n; i += 1){
        swap(vc[i][jhamela[0]], vc[i][jhamela[1]]);

        for(int j = 1; j < m; j += 1){
            if(vc[i][j] < vc[i][j - 1]){
                cout << -1 << '\n';
                return;
            }
        }
    }

    cout << jhamela[0] + 1 << " " << jhamela[1] + 1 << '\n';
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