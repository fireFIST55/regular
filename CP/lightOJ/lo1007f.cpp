#include<bits/stdc++.h>
using namespace std;
#define M 5000000
unsigned long long int phi[M+2];
void eulerusingSieve(){
    int i;
    phi[1]=0;
    for(i=2;i<=M;i++)
        phi[i]=i;
    for(i=2;i<=M;i++){
        if(phi[i]==i){
            for(int j=i;j<=M;j+=i)
                phi[j]-=phi[j]/i;
        }
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }
}
int main(void){
    eulerusingSieve();
    int i,a,b,t;
    scanf("%d",&t);
    char str[10]="Case",ch=':';
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        printf("%s %d%c %llu\n",str,i,ch,phi[b]-phi[a-1]);
    }
    return 0;
}
