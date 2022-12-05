#include<stdio.h>
int main(void)
{
    int i,n,count=0;
    scanf("%d",&n);
    int values[13]={1,2,3,4,5,6,7,8,9,10,10,10,11};
    if(n>10&&n<22)
    {
        for(i=0;i<13;i++)
        {
            if(values[i]==(n-10))
                count++;
        }
    }
    if((n-10)==10)
        printf("%d\n",count*4+3);
    else
        printf("%d\n",count*4);
    return 0;
}
