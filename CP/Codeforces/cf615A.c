#include<stdio.h>
int main(void)
{
    int i,j,a,k,n,m;
    scanf("%d %d",&n,&m);
    int freq[100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&a);
            freq[a-1]++;
        }
    }
    for(i=0;i<m;i++)
    {
        if(freq[i]==0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
