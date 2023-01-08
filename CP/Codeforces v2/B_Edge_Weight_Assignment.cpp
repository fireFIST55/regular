
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int MOD=998244353;
const int INF=(1e15);
const int CONST=3000;
int inverseofconstfact=0;




signed main()
{
 
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	t=1;

	while(t--)
	{
		int n;
		cin>>n;

		vector<int> a(n);
		vector<int> b(n);
		vector<int> deg(n+1);
		vector<int> adj[n+1];

		for(int i=0;i<n-1;i++)
		{
			cin>>a[i]>>b[i];
			deg[a[i]]++; deg[b[i]]++;
			adj[a[i]].push_back(b[i]);
			adj[b[i]].push_back(a[i]);
		}

		int rleaf;
		for(int i=1;i<=n;i++)
		{
			if(deg[i]==1) rleaf=i;
		}


		queue<int> qq;
		vector<bool>vis(n+1,false);
		vector<int> dist(n+1);

		qq.push(rleaf);
		vis[rleaf]=true;

		while(!qq.empty())
		{
			int zz=qq.front();
			qq.pop();

			for(auto xx:adj[zz])
			{
				if(!vis[xx])
				{
					vis[xx]=true;
					dist[xx]=dist[zz]+1;
					qq.push(xx);
				}
			}
		}

		bool even=true;

		for(int i=1;i<=n;i++)
		{
			if(deg[i]==1 && dist[i]&1) even=false;
		}

		int minn=even?1:3;
		int maxx=n-1;

		vector<int> toleaf(n+1);

		for(int i=1;i<=n;i++)
		{
			if(deg[i]==1) toleaf[adj[i][0]]+=1;
		}

		for(int i=1;i<=n;i++)
		{
			if(toleaf[i]>0) maxx-=(toleaf[i]-1);
		}
		
		cout<<minn<<" "<<maxx<<"\n";



	}
}