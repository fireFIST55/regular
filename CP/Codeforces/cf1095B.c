#include<stdio.h>
int main(void)
{
    int i,n,x,y,min,min1=100000,max=-1,max1=-1,result;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(!i)
            min=array[i];
        else if(min>array[i])
        {
            if(min1>min)
                min1=min;
            min=array[i];
        }
        else if(min1>array[i])
            min1=array[i];
        if(max<array[i])
        {
            if(max1<max)
                max1=max;
            max=array[i];
        }
        else if(max1<array[i])
            max1=array[i];
    }
    x=max-min1;
    y=max1-min;
    result=x<y?x:y;
    printf("%d\n",result);
    return 0;
}
