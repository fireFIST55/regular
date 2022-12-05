#include<stdio.h>
int main(void)
{
    int n,v;
    scanf("%d %d",&n,&v);
    if(v>=n-1)
        printf("%d\n",n-1);
    else
        printf("%d\n",v+((v-n-1)*(v-n)/2)-1);
    return 0;
}
