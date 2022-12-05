#include<stdio.h>
int main(void)
{
    int i,j,a,b,n,m,count=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d %d",&a,&b);
            if(a==0&&b==0)
            {
                count++;
            }
        }
    }
    printf("%d\n",m*n-count);
    return 0;
}
