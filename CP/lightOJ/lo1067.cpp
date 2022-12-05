#include<bits/stdc++.h>
using namespace std;
#define mod 1000003
int binomialCoeff(int n,int r){
    int C[r+1];
    memset(C,0,sizeof(C));
    C[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=min(i,r);j;j--)
            C[j]=(C[j]%mod+C[j-1]%mod)%mod;
    }
    return C[r];
}
int main(void){
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int result=binomialCoeff(n,k);
        printf("Case %d: %d\n",cs++,result); 
    }
    return 0;
}