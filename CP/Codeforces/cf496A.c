#include<stdio.h>
int main(void)
{
    int i,j=0,pos,pos1,n,min,max,max1,x,y=-1;
    scanf("%d",&n);
    int array[n],a[n-2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i>=1)
        {
            if(i==1)
            {
                x=array[i]-array[0];
                pos=i;
            }
            else
            {
                if(x<(array[i]-array[i-1]))
                {
                    if(x>y)
                    {
                        y=x;
                        pos1=pos;
                    }
                    x=array[i]-array[i-1];
                    pos=i;
                }
                else if(y<array[i]-array[i-1])
                {
                    y=array[i]-array[i-1];
                    pos1=i;
                }
            }
            if(i>1)
            {
                a[j]=array[i]-array[i-2];
                j++;
            }
        }
    }
    if(n==3)
        printf("%d\n",a[0]);
    else
    {
        for(i=0;i<n-2;i++)
        {
            if(pos==i+1)
                max1=a[i]<y?y:a[i];
            else
                max1=a[i]<x?x:a[i];
            if(!i)
                min=max1;
            else
                min=max1<min?max1:min;
        }
        printf("%d\n",min);
    }
    return 0;
}

