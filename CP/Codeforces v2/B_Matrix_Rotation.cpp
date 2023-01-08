#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<vector<int>>vc(2, vector<int>(2));
    for(int i = 0; i < 2; i += 1){
        for(int j = 0; j < 2; j += 1) cin >> vc[i][j];
    }
    for(int i = 0; i < 5; i += 1){
        if(vc[0][0] < vc[0][1] && vc[0][0] < vc[1][0] && vc[1][0] < vc[1][1] && vc[0][1] < vc[1][1]){
            cout << "YES\n";
            return;
        }
        vector<vector<int>>dummy(2, vector<int>(2)); dummy[0][0] = vc[1][0];
        dummy[0][1] = vc[0][0]; dummy[1][0] = vc[1][1]; dummy[1][1] = vc[0][1];
        vc = dummy;
    }
    cout << "NO\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}