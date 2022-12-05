#include<stdio.h>
int main(void)
{
    int i,t;
    long int total,a,b,c,n,max;
    scanf("%d",&t);
    int answers[t];
    for(i=0,total=0;i<t;i++)
    {
        scanf("%ld %ld %ld %ld",&a,&b,&c,&n);
        max=a>b?a>c?a:c:b>c?b:c;
        total=3*max-a-b-c;
        if((n-total)>0&&(n-total)%3==0)
        {
            answers[i]=1;
        }
        else if((n-total)==0)
        {
            answers[i]=1;
        }
        else
        {
            answers[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

