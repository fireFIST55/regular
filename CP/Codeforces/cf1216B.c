#include<stdio.h>
int main(void)
{
    int i,j,pos,max,total=0,n;
    scanf("%d",&n);
    int array[n],a[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)
    {
        if(array[i]!=-1)
            pos=i;
        for(j=0;j<n;j++)
        {
            if(array[j]!=-1&&i!=j)
                pos=array[pos]>array[j]?pos:j;
        }
        total+=(array[pos]*i+1);
        array[pos]=-1;
        a[i]=pos;
    }
    printf("%d\n",total);
    for(i=0;i<n;i++)
        printf("%d ",a[i]+1);
    printf("\n");
    return 0;
}
