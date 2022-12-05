#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long long int a,b,answer[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a*2<=b)
        {
            answer[i][0]=a;
            answer[i][1]=a*2;
        }
        else
        {
            answer[i][0]=-1;
            answer[i][1]=-1;
        }
    }
    for(i=0;i<t;i++)
        printf("%lld %lld\n",answer[i][0],answer[i][1]);
    return 0;
}
