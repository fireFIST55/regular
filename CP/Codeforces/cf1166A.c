#include<stdio.h>
int main(void)
{
    int i,a,m=0,n,freq[26]={0};
    scanf("%d",&n);
    int pos[n],x=0;
    char name[25];
    for(i=0;i<n;i++)
    {
        scanf("%s",name);
        if(!freq[name[0]-97])
        {
            pos[m]=name[0]-97;
            m++;
        }
        freq[name[0]-97]++;
    }
    for(i=0;i<m;i++)
    {
        a=(freq[pos[i]])/2-1;
        x+=a*(a+1)/2;
        a=(freq[pos[i]]-(freq[pos[i]])/2)-1;
        x+=a*(a+1)/2;
    }
    printf("%d\n",x);
    return 0;
}
