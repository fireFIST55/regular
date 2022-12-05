#include<stdio.h>
int main(void)
{
    int x,i,j,k,n,total=0;
    scanf("%d",&n);
    if(1<=n<=1000)
    {
        for(x=0;x<n;x++)
        {
            scanf("%d %d %d",&i,&j,&k);
            if((i==1&&j==1&&k==1)||(i==1&&j==1)||(i==1&&k==1)||(k==1&&j==1))
            {
               total++;
            }
        }
    }
    printf("%d",total);
    return 0;
}
