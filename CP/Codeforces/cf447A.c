#include<stdio.h>
int main(void)
{
    int i,j,k=0,x=0,p,n,answer=-1;
    scanf("%d %d",&p,&n);
    long long int answers[n],a;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(x==0)
        {
            answers[k]=a%p;
            k++;
            for(j=0;j<k-1;j++)
            {
                if(answers[j]==answers[k-1])
                {
                    x++;
                    answer=i+1;
                }
            }
        }
    }
    printf("%d\n",answer);
    return 0;
}
