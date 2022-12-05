#include<stdio.h>
int main(void)
{
    int t,i,a,b;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            answers[i]=(a*2)*(a*2);
        }
        else if(a>b&&b*2>=a)
        {
            answers[i]=(b*2)*(b*2);
        }
        else if(a>b&&b*2<a)
        {
            answers[i]=a*a;
        }
        else if(b>a&&a*2>=b)
        {
            answers[i]=(a*2)*(a*2);
        }
        else if(b>a&&a*2<b)
        {
            answers[i]=b*b;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
