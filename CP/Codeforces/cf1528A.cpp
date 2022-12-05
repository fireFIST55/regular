#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define endl '\n'
ll dp[N][2];
int V[N][2];
vector<int>adjList[N];

void dfs(int u, int p){
    dp[u][0] = dp[u][1] = 0;

    for(int v: adjList[u]){
        if(v == p)    continue;

        dfs(v, u);
        dp[u][0] += max(abs(V[u][0] - V[v][1]) + dp[v][1], abs(V[u][0] - V[v][0]) + dp[v][0]);
        dp[u][1] += max(abs(V[u][1] - V[v][1]) + dp[v][1], abs(V[u][1] - V[v][0]) + dp[v][0]);
    }
}

void solve(){
    int n, a, b;
    cin>>n;
    ll ans;
    fill(adjList + 1, adjList + n + 1, vector<int>());

    for(int i = 1; i<=n; i+=1)
        cin>>V[i][0] >>V[i][1];

    for(int i = 0; i< n - 1; i+=1){
        cin>>a >>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    dfs(1, -1);
    ans = max(dp[1][0], dp[1][1]);
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}