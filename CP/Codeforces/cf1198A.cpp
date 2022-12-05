#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, i, mxdis = 0; cin >> n >> i;
    mxdis = (i*8)/n; mxdis = pow(2, mxdis) + .0000001;
    vector<int>khela;
    map<int, int>freq;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        if(!freq[a]) khela.push_back(a); freq[a] += 1;
    }

    if(khela.size() <= mxdis){
        cout << 0; return;
    }
    sort(khela.begin(), khela.end());
    int ans = n, curr = 0;
    for(int i = 0; i < mxdis - 1; i += 1) curr += freq[khela[i]];
    for(int i = mxdis - 1; i < khela.size(); i += 1){
        curr += freq[khela[i]];
        ans = min(ans, n - curr); 
        // cout << i << " " << curr << endl;

        curr -= freq[khela[i - mxdis + 1]];
    }

    cout << ans << '\n';
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