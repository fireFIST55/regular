#include<stdio.h>
int main(void)
{
    int i,j,n,m,count=0,even1=0,odd1=0,even2=0,odd2=0,min1,min2;
    scanf("%d %d",&n,&m);
    long long int array[n],array1[m];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&array[i]);
        if(array[i]%2==0)
            even1++;
        else
            odd1++;
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld",&array1[i]);
        if(array1[i]%2==0)
            even2++;
        else
            odd2++;
    }
    min1=even1<odd2?even1:odd2;
    count=min1;
    min2=even2<odd1?even2:odd1;
    count+=min2;
    printf("%d\n",count);
    return 0;
}
