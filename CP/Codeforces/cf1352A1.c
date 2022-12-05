#include<stdio.h>
int main(void)
{
    int i,j,k,t,m,n,count,min;
    scanf("%d",&t);
    int answers[t];
    long int array[100000];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,count=0;j<n;j++)
        {
            scanf("%ld",&array[j]);
        }
        for(j=0,m=0;j<n;j++)
        {
            min=array[j];
            for(k=j+1;k<n;k++)
            {
                if(array[k]!=0)
                {
                    min=min<array[k]?min:array[k];
                }
            }
            for(k=j;k<n;k++)
            {
                if(min==array[k]&&array[k]!=0)
                {
                    m++;
                    array[k]=array[j];
                    array[j]=min;
                    break;
                }
            }
            for(k+=1;k<n;k++)
            {
                if(min==array[k])
                {
                    array[k]=0;
                }
            }
        }
        answers[i]=m;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
