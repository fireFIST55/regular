#include<stdio.h>
int main(void)
{
    int n,k,l,c,d,p,nl,np,a,b,m,min;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    a=((k*l)/nl)/n;
    b=((c*d)/n);
    m=((p)/np)/n;
    min=a<b?a<m?a:m:b<m?b:m;
    printf("%d\n",min);
    return 0;
}
