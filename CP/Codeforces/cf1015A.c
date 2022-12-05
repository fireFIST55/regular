#include<stdio.h>
int main(void)
{
    int i,j,k=0,n,m;
    scanf("%d %d",&n,&m);
    int array[n][2],freq[100]={0},answers[m];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
        freq[array[i][0]-1]++;
        freq[array[i][1]-1]++;
        for(j=array[i][0];j<array[i][1];j++)
        {
            freq[j-1]++;
        }
    }
    for(i=0;i<m;i++)
    {
        if(freq[i]==0)
        {
            answers[k]=i+1;
            k++;
        }
    }
    printf("%d\n",k);
    for(i=0;i<k;i++)
    {
        printf("%d ",answers[i]);
    }
    return 0;
}
