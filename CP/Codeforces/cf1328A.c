#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    long int array[t][2],i,j,answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&array[i][0],&array[i][1]);
    }
    for(i=0;i<t;i++)
    {
        if(array[i][0]%array[i][1]==0)
        {
            answers[i]=0;
        }
        else
        {
            j=array[i][0]/array[i][1];
            answers[i]=array[i][1]*(j+1)-array[i][0];
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%ld\n",answers[i]);
    }
    return 0;
}
