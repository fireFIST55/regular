#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
	encoding_898;
	int t;
	cin>>t;
	while(t--){
		int x,n,ans=1,y=0;
		cin>>n;
		vector<int>vec(n+1),pos(n+1);
		for(int i=1;i<=n;i++)
			cin>>vec[i];
		for(int i=n;i>=1;i--){
			x=0;
			for(int j=2*i;j<=n;j+=i){
				if(vec[i]<vec[j])
					x=x<pos[j]?pos[j]:x;
			}
			pos[i]=x+1;
			ans=max(ans,pos[i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}