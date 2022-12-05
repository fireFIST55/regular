#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int i,a,freq[100000]={0};
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a);
        freq[a-1]++;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i]==0)
        {
            printf("%d\n",i+1);
            break;
        }
    }
    return 0;
}
