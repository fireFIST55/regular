#include<stdio.h>
int main(void)
{
    int array[1000][2];
    int n,i,j,max,temp[1000],total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    for(i=0;i<n;i++)
    {
        total+=array[i][1]-array[i][0];
        temp[i]=total;
    }
    for(i=0;i<1;i++)
    {
        max=temp[0];
        for(j=i+1;j<n;j++)
        {
            max=max>temp[j]?max:temp[j];
        }
    }
    printf("%d",max);
    return 0;
}
