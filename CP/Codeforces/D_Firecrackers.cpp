#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, a, b, time, total = 0; cin >> n >> m >> a >> b;
    time = max(0, (a < b ? b - 1: n - b) - 1);
    vector<int>cracker(m), khela;
    for(int &i: cracker) cin >> i;
    sort(cracker.begin(), cracker.end());
    // for(int i: cracker) cout << i << ' ';
    // cout << endl;
    int index = upper_bound(cracker.begin(), cracker.end(), time) - cracker.begin(); index -= 1;
    if(index < 0 || cracker[index] > time){
        cout << total << '\n';
        return;
    }

    for(int i = index; i >= 0; i -= 1){
        if(cracker[i] <= (time - khela.size())) khela.emplace_back(cracker[i]);
    }
    cout << khela.size() << '\n';
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