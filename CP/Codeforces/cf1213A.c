#include<stdio.h>
int main(void)
{
    int i,j,n,freq[100]={0},max,pos=0,total=0;
    scanf("%d",&n);
    long int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
        if(i>0)
        {
            if((array[0]-array[i])%2==0)
                freq[0]++;
        }
    }
    max=freq[0];
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if((array[i]-array[j])%2==0)
                    freq[i]++;
            }
        }
        if(max<freq[i])
            pos=i;
    }
    for(i=0;i<n;i++)
    {
        if((array[i]-array[pos])%2!=0)
            total++;
    }
    printf("%d\n",total);
    return 0;
}
