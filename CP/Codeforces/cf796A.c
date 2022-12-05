#include<stdio.h>
int main(void)
{
    int i,j,n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=m-2,j=m;;i--,j++)
    {
        if(i>=0&&array[i]!=0&&array[i]<=k)
        {
            printf("%d\n",(m-i-1)*10);
            break;
        }
        if(j<n&&array[j]!=0&&array[j]<=k)
        {
            printf("%d\n",(j-m+1)*10);
            break;
        }
    }
    return 0;
}
