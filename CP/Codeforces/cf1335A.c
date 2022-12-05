#include<stdio.h>
int main(void)
{
    int t,i;
    scanf("%d",&t);
    long int array[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&array[i]);
    }
    for(i=0;i<t;i++)
    {
        if(array[i]<=2)
        {
            printf("0\n");
        }
        else if(array[i]%2!=0)
        {
            printf("%ld\n",array[i]/2);
        }
        else if(array[i]%2==0)
        {
            printf("%ld\n",array[i]/2-1);
        }
    }
    return 0;
}
