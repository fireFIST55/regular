#include<stdio.h>
int main(void)
{
    int i,k,n;
    scanf("%d",&n);
    int array[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k>=array[i][0]&&k<=array[i][1])
        {
            printf("%d\n",n-i);
            return 0;
        }
    }
}
