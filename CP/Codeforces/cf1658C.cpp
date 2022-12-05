#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, pos, cnt = 0; cin >> n; 
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        if(vc[i] == 1){
            pos = 1; cnt += 1;
        }
    }
    if(cnt != 1){
        cout << "NO\n";
        return;
    }
    rotate(vc.begin(), vc.begin() + pos, vc.end());

    for(int i = 1; i < n; i += 1){
        if(vc[i] - vc[i - 1] > 1){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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