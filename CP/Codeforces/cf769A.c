#include<stdio.h>>
int main(void)
{
    int i,j,n,min;
    scanf("%d",&n);
    int year[n];
    for(i=0;i<n;i++)
        scanf("%d",&year[i]);
    for(i=0;i<n-1;i++)
    {
        min=year[i];
        for(j=i+1;j<n;j++)
            min=min<year[j]?min:year[j];
        for(j=i+1;j<n;j++)
        {
            if(min==year[j])
            {
                year[j]=year[i];
                year[i]=min;
                break;
            }
        }
    }
    printf("%d\n",year[n/2]);
    return 0;
}
