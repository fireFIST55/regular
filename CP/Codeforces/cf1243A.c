#include<stdio.h>
int main(void)
{
    int i,j,k,l,n,max,array[1000];
    scanf("%d",&k);
    int answers[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[j]);
        }
        for(j=0;j<n-1;j++)
        {
            max=array[j];
            for(l=j+1;l<n;l++)
            {
                max=max>array[l]?max:array[l];
            }
            for(l=j+1;l<n;l++)
            {
                if(array[l]==max)
                {
                    array[l]=array[j];
                    array[j]=max;
                    break;
                }
            }
        }
        for(j=n-1;j>=0;j--)
        {
            if(array[j]>=j+1)
            {
                answers[i]=j+1;
                break;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
