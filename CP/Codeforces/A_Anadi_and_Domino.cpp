#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
vector<set<int> > g;
 
bool iep(int u, int v){
	if(g[u].find(v)==g[u].end()) return 0;
	else return 1;
}
 
void solve(){
	cin>>n>>m;
	g.clear(); g.resize(n+1);
	for(int i=0;i<m;i++){
		int u,v; cin>>u>>v;
		g[u].insert(v);
		g[v].insert(u);
	}
	if(n<=6){
		cout<<m<<endl;
		return;
	}
	int ans = 0;
	for(int v1=1;v1<=7;v1++){
		int deg1 = g[v1].size();
		for(int v2=v1+1;v2<=7;v2++){
			// (v1,v2) have common number
			int deg2 = g[v2].size();
 
			int tempans = m;
			for(int i=1;i<=7;i++){
				if((i==v1) || (i==v2)) continue;
				if(iep(i,v1) && iep(i,v2)){
					tempans--;
				}
			}
			ans = max(ans, tempans);
		}
	}
	cout<<ans<<"\n";
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