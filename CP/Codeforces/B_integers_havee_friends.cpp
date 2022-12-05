#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int T,n,a[N],b[N];
 
void solve(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++) b[i]=abs(a[i]-a[i-1]);
	int gcd=0,len=0,mx=0;
	for(int i=1;i<n;i++){
		gcd=__gcd(gcd,b[i]);
		if(gcd==1){
			gcd=len=0;
			for(int j=i;j>=1;j--){
				int t=__gcd(gcd,b[j]);
				if(t>1) gcd=t,len++,mx=max(len,mx);
				else break;
			}
		}else len++,mx=max(len,mx);
	}
	cout<<mx+1<<"\n";
}
 
signed main(){
	ios::sync_with_stdio(false);
	for(cin>>T;T;T--) solve();
}