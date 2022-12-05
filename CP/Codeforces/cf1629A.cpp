#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x, n, k;
    cin >> n >> k;
    vector<int>a(n);
    vector<pair<int, int>>stor;

    for(int &X: a)  cin >> X;
    for(int i = 0; i < n; i += 1){
        cin >> x;
        stor.push_back({a[i], x});
    }
    sort(stor.begin(), stor.end());

    for(int i = 0; i < n; i += 1){
        if(k >= stor[i].first) k += stor[i].second;
    }

    cout << k << '\n';
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