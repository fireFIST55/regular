#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
    if(!b)
        return a;
    return gcd(b,a%b);
}
ll ABS(ll n){
    return (n<0)?-n:n;
}
int main(void){
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        ll a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        ll x=ABS(a-c),y=ABS(b-d),result=gcd(x,y)+1;
        printf("Case %d: %lld\n",cs++,result);
    }
    return 0;
}