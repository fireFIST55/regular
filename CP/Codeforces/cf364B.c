#include<stdio.h>
int main(void)
{
    long long int x,y,i,n,m;
    scanf("%lld %lld",&n,&m);
    int row[100000]={0},col[100000]={0};
    long long int answer[m],rows=n,cols=n;
    for(i=0;i<m;i++)
    {
        scanf("%lld %lld",&x,&y);
        row[x-1]++;
        col[y-1]++;
        if(row[x-1]==1&&col[y-1]==1)
        {
            rows-=1;
            cols-=1;
        }
        else if(row[x-1]==1&&col[y-1]>1)
            rows-=1;
        else if(col[y-1]==1&&row[x-1]>1)
            cols-=1;
        if(rows>0&&cols>0)
            answer[i]=rows*cols;
        else
            answer[i]=0;
    }
    for(i=0;i<m;i++)
        printf("%lld ",answer[i]);
    return 0;
}
