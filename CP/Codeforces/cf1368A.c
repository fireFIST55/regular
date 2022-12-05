#include<stdio.h>
int main(void)
{
    int i,j,a,b,n,t;
    scanf("%d",&t);
    int answers[t];
    for(j=0;j<t;j++)
    {
        scanf("%d %d %d",&a,&b,&n);
        for(i=0;;i++)
        {
            if(a>b)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }
            if(a>n||b>n)
            {
                break;
            }
        }
        answers[j]=i+1;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
