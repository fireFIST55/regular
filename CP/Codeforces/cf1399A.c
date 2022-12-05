#include<stdio.h>
int main(void)
{
    int i,j,k,t,pos;
    scanf("%d",&t);
    int n,min,temp,answer[t],array[50];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&array[j]);
        for(j=0;j<n-1;j++)
        {
            pos=j;
            for(k=j+1;k<n;k++)
            {
                if(array[pos]>array[k])
                    pos=k;
            }
            temp=array[j];
            array[j]=array[pos];
            array[pos]=temp;
        }
        k=n;
        for(j=0;j<n;j++)
        {
            if((j+1<n)&&((array[j]==array[j+1])||(array[j]==(array[j+1]-1))))
                k-=1;
        }
        if(k==1)
            answer[i]=1;
        else
            answer[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
