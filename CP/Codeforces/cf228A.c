#include<stdio.h>
int main(void)
{
    long int array[4];
    int i,j,count=0;
    for(i=0;i<4;i++)
    {
        scanf("%ld",&array[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(array[i]==array[j]&&array[j]!=0)
            {
                count++;
                array[j]=0;
            }
        }
    }
    printf("%d",count);
    return 0;
}
