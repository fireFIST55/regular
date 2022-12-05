#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>vc;
    map<int, int>khela;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; vc.emplace_back(a, i);
    }
    sort(vc.begin(), vc.end());
    if(n == 2){
        cout << 1 << '\n';
        return;
    }

    for(int i = 1; i < n; i += 1) khela[vc[i].first - vc[i - 1].first] += 1;
    if(khela[vc[1].first - vc[0].first] == n - 1){
        cout << vc[0].second + 1 << '\n';
        return;
    }
    for(int i = 0; i < n; i += 1){
        if(i){
            if(i + 1 < n){
                khela[vc[i].first - vc[i - 1].first] -= 1; khela[vc[i + 1].first - vc[i].first] -= 1;
                if(khela[vc[i + 1].first - vc[i - 1].first] == n - 3){
                    cout << vc[i].second + 1 << '\n';
                    return;
                }
                khela[vc[i].first - vc[i - 1].first] += 1; khela[vc[i + 1].first - vc[i].first] += 1;
            }
            else{
                khela[vc[i].first - vc[i - 1].first] -= 1;
                if(khela[vc[i - 1].first - vc[i - 2].first] == n - 2){
                    cout << vc[i].second + 1 << '\n';
                    return;
                }
                khela[vc[i].first - vc[i - 1].first] += 1;
            }
        }
        else{
            khela[vc[i + 1].first - vc[i].first] -= 1;
            if(khela[vc[i + 2].first - vc[i + 1].first] == n - 2){
                cout << vc[i].second + 1 << '\n';
                return;
            }
            khela[vc[i + 1].first - vc[i].first] += 1;
        }
    }
    cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}