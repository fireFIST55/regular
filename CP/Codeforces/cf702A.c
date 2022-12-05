#include<stdio.h>
int main(void)
{
    int n,i,j,k=0,length=0,max=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i>0)
        {
            if(array[i]>array[i-1])
            {
                length++;
            }
            else if(array[i]<=array[i-1])
            {
                if(max<length)
                {
                    max=length;
                }
                length=0;
            }
        }
    }
    if(max<length)
    {
        max=length;
    }
    printf("%d\n",max+1);
    return 0;
}
