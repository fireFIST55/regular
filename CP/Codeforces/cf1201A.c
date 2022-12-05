#include<stdio.h>
int main(void)
{
    int i,j,n,m,max;
    scanf("%d %d",&n,&m);
    int array[m],total=0;
    char string[n][m+2];
    for(i=0;i<n;i++)
        scanf("%s",string[i]);
    for(i=0;i<m;i++)
        scanf("%d",&array[i]);
    for(i=0;i<m;i++)
    {
        int freq[26]={0};
        for(j=0,max=0;j<n;j++)
        {
            freq[string[j][i]-65]++;
            if(max<freq[string[j][i]-65])
                max=freq[string[j][i]-65];
        }
        total+=max*array[i];
    }
    printf("%d\n",total);
}
