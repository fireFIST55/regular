#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    vector<pair<int, int>>dummy;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; dummy.emplace_back(vc[i], i);
    }
    sort(dummy.begin(), dummy.end());
    int l = n + 1, r = - 1;
    for(int i = 0; i < n; i += 1){
        if(dummy[i].first != vc[i]){
            l = min(l, dummy[i].second), r = max(r, dummy[i].second); 
        }
    }
    bool yes = 1;
    if(r == - 1) l = 0, r = 0;
    else{
        for(int i = l, j = r; i <= j; i += 1, j -= 1) swap(vc[i], vc[j]);
        for(int i = 0; i < n && yes; i += 1){
            if(vc[i] != dummy[i].first) yes = 0;
        }
    }
    if(yes) cout << "yes\n" << l + 1 << " " << r + 1 << '\n';
    else cout << "no\n";
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