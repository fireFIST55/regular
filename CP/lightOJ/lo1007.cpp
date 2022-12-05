#include<bits/stdc++.h>
using namespace std;
int phi(int n){
    double rat=n;
    int i=0,x;
    while(!(n%2)){
        i=2;
        n/=2;
    }
    if(i)
        rat*=(1.0-(1.0/i));
    for(i=3;i<=sqrt(n);i+=2){
        if(!(n%i)){
            while(!(n%i)){
                n/=i;
            }
            rat*=(1.0-(1.0/i));
        }
    }
    if(n>1)
        rat*=(1.0-(1.0/n));
    x=rat;
    return x;
}
int main(void){
    int i,j,a,b,t;
    char str[10]="Case",ch=':';
    unsigned long long int total,count;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        for(j=a,total=0;j<=b;j++){
            count=phi(j);
            total+=(count*count);
        }
        printf("%s %d%c %llu\n",str,i+1,ch,total);
    }
    return 0;
}
