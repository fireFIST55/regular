#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long long int a,b,c,d,total=0,answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        total=0;
        if(a<=b)
            answer[i]=b;
        else if(a>b&&c>d)
        {
            total=b;
            a-=b;
            if(a%(c-d)==0)
                total+=c*(a/(c-d));
            else
                total+=c*((a/(c-d))+1);
            answer[i]=total;
        }
        else
            answer[i]=-1;
    }
    for(i=0;i<t;i++)
        printf("%lld\n",answer[i]);
    return 0;
}
