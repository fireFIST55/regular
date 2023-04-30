#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), suffix(n);
    for(int &i: vc) cin >> i;
    for(int i = n - 1; i >= 0; i -= 1){
        if(i == n - 1) suffix[i] = (vc[i] == 2);
        else suffix[i] = suffix[i + 1] + (vc[i] == 2);
    }
    int curr = 0;
    for(int i = 0; i < n - 1; i += 1){
        curr += (vc[i] == 2);
        if(curr == suffix[i + 1]){
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << - 1 << '\n';
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