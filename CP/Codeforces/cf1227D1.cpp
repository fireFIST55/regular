#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    vector< pair<int, int> > vp;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];   vp.emplace_back(vc[i], i);
    }

    sort(vp.begin(), vp.end());
    int req; cin >> req;

    for(int i = 0; i < req; i += 1){
        int pos, lagbe, lim = - 1; cin >> lagbe >> pos;
        vector<int>khela;

        for(int k = n - lagbe; k < n; k += 1){
            int l = k, curr = vp[k].second;

            while(l >= 0 && vp[l].first == vp[k].first && vp[l].second > lim)   curr = vp[l--].second;

            lim = max(lim, curr);
            khela.push_back(curr);
        }

        sort(khela.begin(), khela.end());
        cout << vc[khela[--pos]] << '\n';
    }
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