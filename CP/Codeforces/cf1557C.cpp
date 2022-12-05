#include<bits/stdc++.h>
using namespace std;
 
#define int long long
const int si=2e5+10;
const int mod=1e9+7;
int T,n,k;
 
int A[si],B[si];
int p(int a,int n){
	if(!n) return 1;
	int tmp=p(a,n>>1);
	tmp=tmp*tmp%mod;
	if(n&1)tmp=tmp*a%mod;
	return tmp;
}
void init(){
	A[0]=B[0]=1;
	for(register int i=1;i<=si;++i){
		A[i]=(A[i-1]*i)%mod;
		B[i]=p(A[i],mod-2);
	}
}
int C(int n,int m){
	if(n<m || n<0 || m<0) return 0;
	return ((A[n]*B[m]%mod)*(B[n-m]%mod))%mod;
}
void extra(){}
int fa=1,fb=1,fc=1,fd=1;
int s1[si],s2[si];
signed main(){
	init();
	scanf("%lld",&T);
	while(T--){
		scanf("%lld%lld",&n,&k);
		fa=fb=0;
		for(register int i=1;i<=n;++i){
			if(((n-i)&1)==0) fa=(fa+C(n,i))%mod;
			else fb=(fb+C(n,i))%mod;
		}
		if((n&1)==0) fc=s1[0]=s2[0]=1,fd=0;
		else fc=0,fd=s1[0]=s2[0]=1;
		for(register int i=1;i<=k;++i){
			s1[i]=(s1[i-1]*(fd+fa))%mod;
			s2[i]=(s2[i-1]*(fd+fa+fc+fb))%mod;
		}
		int res=s1[k];
		if(res==res-1){
			cout<<res<<endl;
			return 0;
		}
		for(register int i=1;i<=k;++i){
			res=(res+(s1[i-1]*fc%mod)*(s2[k-i]%mod))%mod; 
		}
		printf("%lld\n",res);
		if(res==res-1){
			cout<<res<<endl;
			return 0;
		}
		else continue;
	}
	return 0;
}