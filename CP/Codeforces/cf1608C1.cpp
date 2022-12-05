#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b){
    if(a.second < b.second) return 1;
    else return 0;
}

void solve(){
    int n; cin >> n;
    vector<int>vc(n), ans(n);
    map<pair<int, int>, int>mp1, mp2;
    vector<pair<int, int>>vp1, vp2;
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int x; cin >> x;
        mp1[{vc[i], x}] = i;
        vp1.emplace_back(vc[i], x); vp2.emplace_back(vc[i], x);
    }

    sort(vp1.begin(), vp1.end());
    sort(vp2.begin(), vp2.end(), cmp);
    for(int i = 0; i < n; i += 1) cout << vp1[i].first << " " << vp1[i].second << endl;
    cout << endl;
    for(int i = 0; i < n; i += 1) cout << vp2[i].first << " " << vp2[i].second << endl;

    set<pair<int, int>>st1, st2;
    for(int i = 0; i < n; i += 1) mp2[vp2[i]] = i;

    for(int i = 0; i < n; i += 1){
        int index = mp2[vp1[i]];
        if((index + 1) + (i + 1) >= n){
            set<pair<int, int>>st;
            st.insert(vp1.begin(), vp1.begin() + i + 1); st.insert(vp2.begin(), vp2.begin() + index + 1);
            cout << st.size() << ' ';
            if(st.size() == n) ans[mp1[vp1[i]]] = 1;
            else ans[mp1[vp1[i]]] = 0;
        }
        else ans[mp1[vp1[i]]] = 0;
    }
    cout << endl;

    for(int i: ans) cout << i;
    cout << '\n';
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