#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int array[n],i,j,max,min,pos_max,pos_min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1;i<n;i++)
    {
        max=max>array[i]?max:array[i];
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==max)
        {
            pos_max=i;
            break;
        }
    }
    min=array[0];
    for(i=0;i<n;i++)
    {
        min=min<array[i]?min:array[i];
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==min)
        {
            pos_min=i;
        }
    }
    if(pos_max>pos_min)
    {
        printf("%d",(n-pos_min-2)+pos_max);
    }
    else
    {
        printf("%d",(n-pos_min-1)+pos_max);
    }
    return 0;
}
