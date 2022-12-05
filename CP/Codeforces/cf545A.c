#include<stdio.h>
int main(void)
{
    int i,j,a,n;
    scanf("%d",&n);
    int x=0,total=n,freq[100]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a&&a!=-1)
            {
                if(a==1)
                {
                    if(!freq[i])
                        total-=1;
                    freq[i]++;
                }
                else if(a==2)
                {
                    if(!freq[j])
                        total-=1;
                    freq[j]++;
                }
                else
                {
                    if(!freq[i])
                        total-=1;
                    if(!freq[j])
                        total-=1;
                    freq[i]++;
                    freq[j]++;
                }
            }
        }
    }
    printf("%d\n",total);
    for(i=0;i<n;i++)
    {
        if(!freq[i])
        {
            x++;
            printf("%d ",i+1);
        }
        if(x==total)
            break;
    }
    return 0;
}
