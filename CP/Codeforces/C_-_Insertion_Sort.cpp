#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int j = i - 1;
        while(j >= 0 && vc[j] > vc[j + 1]){
            swap(vc[j], vc[j + 1]); j -= 1;
        }
        cout << vc[0];
        for(int i = 1; i < n; i += 1) cout << ' ' << vc[i];
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