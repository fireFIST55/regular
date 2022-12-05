#include<stdio.h>
int main(void)
{
    int t,n,i,j,x;
    scanf("%d",&t);
    int array[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<t;i++)
    {
        x=array[i]/2;
        if(x%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            for(j=2;j<=array[i];j+=2)
            {
                printf("%d ",j);
            }
            for(j=1;j<array[i]-2;j+=2)
            {
                printf("%d ",j);
            }
            j-=2;
            printf("%d\n",j+x+2);
        }
    }
}
