#include<stdio.h>
int main(void)
{
    int i,n,pos,count=0;
    scanf("%d",&n);
    long int x,y,array[n],min,max=-1;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
        if(n>2)
        {
            if(!i)
            {
                x=1;
                min=array[i];
            }
            else
            {
                if(min>array[i])
                {
                    x=1;
                    min=array[i];
                }
                else if(min==array[i])
                    x++;
            }
            if(max<array[i])
            {
                y=1;
                max=array[i];
            }
            else if(max==array[i])
                y++;
        }
    }
    if(n>2&&min!=max)
        printf("%d\n",n-x-y);
    else
        printf("%d\n",0);
    return 0;
}
