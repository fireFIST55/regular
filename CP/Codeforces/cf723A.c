#include<stdio.h>
int main(void)
{
    int array[3],i,min,max,temp;
    for(i=0;i<3;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1;i<3;i++)
    {
        max=max>array[i]?max:array[i];
    }
    min=array[0];
    for(i=1;i<3;i++)
    {
        min=min<array[i]?min:array[i];
    }
    for(i=0;i<3;i++)
    {
        if(array[i]!=min&&array[i]!=max)
        {
            temp=array[i];
        }
    }
    printf("%d",max-temp+temp-min);
    return 0;
}
