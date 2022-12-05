#include<stdio.h>
int main(void)
{
    int i,n,max=0,min=101,pos_max,pos_min;
    scanf("%d",&n);
    int array[n],ans1,ans2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(max<array[i])
        {
            pos_max=i+1;
            max=array[i];
        }
        if(min>array[i])
        {
            pos_min=i+1;
            min=array[i];
        }
    }
    if(pos_min<pos_max)
    {
        ans1=pos_max-1;
        ans2=n-pos_min;
    }
    else
    {
        ans1=pos_min-1;
        ans2=n-pos_max;
    }
    max=ans1>ans2?ans1:ans2;
    printf("%d\n",max);
    return 0;
}
