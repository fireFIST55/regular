#include<bits/stdc++.h>
using namespace std;
#define M 5000002
unsigned long long int sum[M];
int primeFac(int n){
    double rat;
    rat=n;
    int i=0,res;
    while(!(n%2)){
        i=2;
        n/=2;
    }
    if(i)
        rat*=(1.0-(1.0/i));
    for(i=3;i<=sqrt(n);i+=2){
        if(!(n%i)){
            while(!(n%i))
                n/=i;
            rat*=(1.0-(1.0/i));
        }
    }
    if(n>1)
        rat*=(1.0-(1.0/n));
    res=rat;
    return res;
}
int main(void){
    int i,t,a,b;
    char str[10]="Case",ch=':';
    unsigned long long int count;
    for(i=2;i<=5000000;i++){
        count=primeFac(i);
        sum[i]=count*count;
        sum[i]+=sum[i-1];
    }
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        printf("%s %d%c %lld\n",str,i,ch,sum[b]-sum[a-1]);
    }
}
