#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int mod = 1e9+7;
void xw()
{
    int n;  cin>>n;
    int MI = 1;
    for(int i=1;i<n;i++)    MI = MI * 2 % mod;
    vector<vector<int>> g(n);
    vector<int> h(n);
    for(int i=0;i<n-1;i++)
    {
        int u,v;    cin>>u>>v;
        u--,v--;
        g[u].push_back(v),  g[v].push_back(u);
    }  

    int ans = 0;
    auto dfs = [&](auto dfs,int u,int fa)->void
    {
        h[u] = 1;
        for(auto v : g[u])
        {
            if(v==fa) continue;
            dfs(dfs,v,u);
            h[u] = max(h[u] , h[v] + 1);
        }
        ans += h[u] * MI % mod;
    };
    dfs(dfs,0,-1);
    ans = ans % mod;
    cout<<ans<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);    cin.tie(0); cout.tie(0);
    int T;  cin>>T;
    while(T--)
    {
        xw();
    }
}