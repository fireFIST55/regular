#include<stdio.h>
int main(void)
{
    int i,j,t,n,count;
    scanf("%d",&t);
    int answers[t];
    long int array[100000],freq[100000]={0};
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,count=0;j<n;j++)
        {
            scanf("%ld",&array[j]);
            freq[array[j]]++;
            if(freq[array[j]]>1)
            {
                count++;
            }
        }
        for(j=0;j<n;j++)
        {
            freq[array[j]]=0;
        }
        answers[i]=n-count;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}

