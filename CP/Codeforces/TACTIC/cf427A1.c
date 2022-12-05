#include<stdio.h>
int main(void)
{
    int t=0,i,j,p,n,got,temp,total=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>0)
        {
            for(j=i+1;array[i]>0&&j<n;j++)
            {
                if(array[j]==-1)
                {
                    array[j]=0;
                    array[i]--;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==-1)
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
