#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc;
    if(n <= 2) cout << n << '\n';
    else{
        if(!(n % 3)){
            for(int i = 0; i < n / 3; i += 1){
                vc.emplace_back(2); vc.emplace_back(1);
            }
        }
        else if((n % 3) == 1){
            for(int i = 0; i < n / 3; i += 1){
                vc.emplace_back(1); vc.emplace_back(2);
            }
            vc.emplace_back(1);
        }
        else{
            for(int i = 0; i < n / 3; i += 1){
                vc.emplace_back(2); vc.emplace_back(1);
            }
            vc.emplace_back(2);
        }
        for(int i: vc) cout << i;
        cout << '\n';
    }
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