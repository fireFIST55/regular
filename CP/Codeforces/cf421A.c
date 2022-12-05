#include<stdio.h>
int main(void)
{
    int i,n,num,a,b,freq[100]={0};
    scanf("%d %d %d",&n,&a,&b);
    int answers[n];
    for(i=0;i<a;i++)
    {
        scanf("%d",&num);
        freq[num-1]++;
        answers[num-1]=1;
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&num);
        freq[num-1]++;
        if(freq[num-1]==1)
        {
            answers[num-1]=2;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",answers[i]);
    return 0;
}
