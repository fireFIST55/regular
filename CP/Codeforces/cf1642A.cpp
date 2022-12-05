#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    double ans = 0;
    vector< pair<double, double> > khela;
    for(int i = 0; i < 3; i += 1){
        double x, y; cin >> x >> y;
        khela.emplace_back(x, y);
    }

    for(int i = 0; i < 3; i += 1){
        for(int j = i + 1; j < 3; j += 1){
            int nai;
            if(khela[i].second == khela[j].second && khela[i].second){
                for(int k = 0; k < 3; k += 1){
                    if(k != i && k != j){
                        nai = k;
                        break;
                    }
                }
                if(khela[j].second > khela[nai].second) ans += abs(khela[i].first - khela[j].first);
            }
        }
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