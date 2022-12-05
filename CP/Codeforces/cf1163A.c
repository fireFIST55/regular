#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(!m)
        printf("%d\n",1);
    else if(m<=n/2)
        printf("%d\n",m);
    else
        printf("%d\n",n-m);
    return 0;
}
