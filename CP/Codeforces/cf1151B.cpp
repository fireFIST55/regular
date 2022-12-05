#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>one[n][10], zero[n][10];

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            int a; cin >> a;

            for(int k = 0; k < 10; k += 1){
                if(a&(1<<k)) one[i][k].push_back(j);
                else zero[i][k].push_back(j);
            }
        }
    }

    vector<int>ans(n);
    for(int i = 0; i < 10; i += 1){
        deque<int>khela;
        for(int j = 0; j < n; j += 1){
            if(one[j][i].size()){
                ans[j] = one[j][i][0]; khela.push_back(j);
            }
            else    ans[j] = zero[j][i][0];
        }

        if(khela.size()&1){
            cout << "TAK\n";
            for(int i: ans) cout << i + 1 << ' ';
            cout << '\n';
            return;
        }
        else{
            while(!khela.empty()){
                int k = khela.back();
                khela.pop_back();

                if(zero[k][i].size()){
                    ans[k] = zero[k][i][0];

                    cout << "TAK\n";
                    for(int i: ans) cout << i + 1 << ' ';
                    cout << '\n';
                    return;
                }
            }
        }
    }

    cout << "NIE\n";
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