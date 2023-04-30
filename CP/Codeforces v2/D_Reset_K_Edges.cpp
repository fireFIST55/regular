#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;

vector<vector<int>>adj;
vector<int>disp, dummy;

void ini(int u, int dis){
    dummy.emplace_back(u);
    if(dummy.size() - dis >= 0) disp[u] = dummy[dummy.size() - dis];
    for(int v: adj[u]) ini(v, dis);
    dummy.pop_back();
}
int check(int height){
    disp.assign(n + 5, - 1);
    ini(0, height);
    
}

void solve(){
    int p; cin >> n >> p;
    adj.assign(n + 5, vector<int>());
    for(int i = 2; i < n + 1; i += 1){
        int a; cin >> a; 
        adj[a].emplace_back(i);
    }
    int ans = n, left = 1, right = n - 1;
    while(left <= right){
        int mid = (left + right) >> 1;
        int need = check(mid);
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}