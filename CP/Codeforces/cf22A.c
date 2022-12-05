#include<stdio.h>
int main(void)
{
    int i,n,min=1000,sec_min=1000;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(min>array[i])
            min=array[i];
    }
    for(i=0;i<n;i++)
    {
        if(sec_min>array[i]&&array[i]!=min)
            sec_min=array[i];
    }
    if(sec_min==1000)
        printf("NO\n");
    else
        printf("%d\n",sec_min);
    return 0;
}
