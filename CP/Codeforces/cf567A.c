#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    long int dif,dif1,max,min,array[n],answer[n][2];
    for(i=0;i<n;i++)
        scanf("%ld",&array[i]);
    for(i=0;i<n;i++)
    {
        dif=array[i]-array[0];
        dif1=array[n-1]-array[i];
        max=dif>dif1?dif:dif1;
        if(!i)
            min=array[i+1]-array[i];
        else if(i+1==n)
            min=array[i]-array[i-1];
        else
            min=(array[i]-array[i-1])<(array[i+1]-array[i])?(array[i]-array[i-1]):(array[i+1]-array[i]);
        answer[i][0]=min;
        answer[i][1]=max;
    }
    for(i=0;i<n;i++)
        printf("%ld %ld\n",answer[i][0],answer[i][1]);
    return 0;
}
