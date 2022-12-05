#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(!b)
        return a;
    return gcd(b,a%b);
}
int main(void){
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int x=abs(a-c),y=abs(b-d);
        int result=gcd(x,y)+1;
        printf("Case %d: %d\n",cs++,result);
    }
    return 0;
}