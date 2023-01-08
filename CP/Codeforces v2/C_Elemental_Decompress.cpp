#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n; cin >> n;
    vector<int>vc(n), ans1(n), ans2(n), a(n + 5), b(n + 5), index(n + 5), x, y;
    vector<pair<int, int>>left, check;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        if(!a[vc[i]]){
            a[vc[i]] = 1; ans1[i] = vc[i]; index[vc[i]] = i;
        }
        else if(!b[vc[i]]){
            b[vc[i]] = 1, check.emplace_back(vc[i], i), ans2[i] = vc[i];
        }
        else yes = 0;
    }
    for(int i = 1; i <= n; i += 1){
        if(!a[i]) left.emplace_back(i, i);
        else x.emplace_back(i);
        if(!b[i]) y.emplace_back(i);
    }
    sort(left.begin(), left.end());
    sort(check.begin(), check.end());

    for(int i = 0; i < check.size() && yes; i += 1){
        if(check.size() != left.size()){
            yes = 0; break;
        }
        if(check[i].first < left[i].first) yes = 0;
        else ans1[check[i].second] = left[i].first;
    }
    for(int i = 0; i < x.size() && yes; i += 1){
        if(x[i] < y[i] || x.size() != y.size()){
            yes = 0; break;
        }
        else ans2[index[x[i]]] = y[i];
    }
    if(!yes) cout << "NO\n";
    else{

        cout << "YES\n";
        for(int i: ans1) cout << i << ' ';
        cout << '\n';
        for(int i = 0; i < n; i += 1){
            if(ans2[i]) cout << ans2[i] << ' ';
            else cout << ans1[i] << ' ';
        }
        cout << '\n';
    }
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