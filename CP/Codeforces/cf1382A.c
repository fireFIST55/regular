#include<stdio.h>
int main(void)
{
    int i,j,k,a,n,m,t;
    scanf("%d",&t);
    int answer[t];
    for(i=0;i<t;i++)
    {
        int track[1000]={0},track1[1000]={0},freq[1000]={0};
        scanf("%d %d",&n,&m);
        for(j=0,k=1;j<n;j++)
        {
            scanf("%d",&a);
            track[a-1]++;
            if(track[a-1]==1)
                freq[a-1]++;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&a);
            track1[a-1]++;
            if(track1[a-1]==1)
                freq[a-1]++;
            if(freq[a-1]==2)
            {
                answer[i]=a;
                k=0;
            }
        }
        if(k)
            answer[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i]>0)
            printf("YES\n%d %d\n",1,answer[i]);
        else
            printf("NO\n");
    }
}
