#include<bits/stdc++.h>
using namespace std;
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
    map<int,int>x;
    int i,k,t,a,b;
    char str[10]="Case",ch=':';
    unsigned long long int total,count,sum[];
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%d %d",&a,&b);
        for(i=a,total=0;i<=b;i++){
            if(x[i])
                count=x[i];
            else{
                count=primeFac(i);
                x[i]=count;
            }
            total+=(count*count);
        }
        printf("%s %d%c %lld\n",str,k,ch,total);
    }
}
