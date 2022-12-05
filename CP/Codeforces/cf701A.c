#include<stdio.h>
int main(void)
{
    int i,j,k=0,x=0,l,max,n;
    scanf("%d",&n);
    int array[n],sub[n],answers[n/2+1][2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sub[i]=array[i];
    }
    for(i=0;i<n-1;i++)
    {
        max=array[i];
        for(j=i+1;j<n;j++)
        {
            max=max>array[j]?max:array[j];
        }
        for(j=i+1;j<n;j++)
        {
            if(array[j]==max)
            {
                array[j]=array[i];
                array[i]=max;
                break;
            }
        }
    }
    for(i=0,l=n-1;i<=l;)
    {
        for(j=0;j<n;j++)
        {
            if(sub[j]==array[i]&&i<n/2)
            {
                answers[x][0]=j+1;
                sub[j]=-1;
                i++;
                x++;
            }
            if(sub[j]==array[l]&&l>=n/2)
            {
                answers[k][1]=j+1;
                sub[j]=-1;
                l--;
                k++;
            }
        }
    }
    for(i=0;i<x;i++)
    {
        printf("%d %d\n",answers[i][0],answers[i][1]);
    }
    return 0;
}

