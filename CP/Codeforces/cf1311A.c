#include<stdio.h>
int main(void)
{
    int t,i;
    scanf("%d",&t);
    long int a,b;
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a==b)
        {
            answers[i]=0;
        }
        else if(a%2==0&&b%2==0&&a<b||a%2!=0&&b%2!=0&&a<b)
        {
            answers[i]=2;
        }
        else if(a%2==0&&b%2!=0&&a<b||a%2!=0&&b%2==0&&a<b)
        {
            answers[i]=1;
        }
        else if(a%2==0&&b%2==0&&a>b||a%2!=0&&b%2!=0&&a>b)
        {
            answers[i]=1;
        }
        else if(a%2==0&&b%2!=0&&a>b||a%2!=0&&b%2==0&&a>b)
        {
            answers[i]=2;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
