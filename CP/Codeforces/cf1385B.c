#include<stdio.h>
int main(void)
{
    int i,j,k,a,t,freq[400][50]={0},n;
    scanf("%d",&t);
    int answers[t][50],seq[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        seq[i]=n;
        for(j=0,k=0;j<n*2;j++)
        {
            scanf("%d",&a);
            freq[i][a-1]++;
            if(freq[i][a-1]==1)
            {
                answers[i][k]=a;
                k++;
                a++;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<seq[i];j++)
        {
            printf("%d ",answers[i][j]);
        }
        printf("\n");
    }
    return 0;
}
