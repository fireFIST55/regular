#include<stdio.h>
int main(void)
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int theor=(n*(n+1))/2,dif,dif1;
    if(m>theor&&m%theor!=0)
    {
        for(i=1;i<=n;i++)
        {
            if((i*(i+1)/2)==m%theor)
            {
                printf("%d\n",0);
                break;
            }
            else if((i*(i+1)/2)>m%theor)
            {
                i-=1;
                printf("%d\n",m%theor-(i*(i+1)/2));
                break;
            }
        }
    }
    else if(m%theor==0)
        printf("%d\n",0);
    else if(m<theor)
    {
        dif=theor-m;
        dif1=m-1;
        if(dif<dif1)
        {
            for(i=n-1;i>=1;i--)
            {
                if((i*(i+1))/2==m)
                {
                    printf("%d\n",0);
                    break;
                }
                else if((i*(i+1))/2<m)
                {
                    printf("%d\n",m-(i*(i+1))/2);
                    break;
                }
            }
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if((i*(i+1))/2==m)
                {
                    printf("%d\n",0);
                    break;
                }
                else if((i*(i+1))/2>m)
                {
                    i-=1;
                    printf("%d\n",m-(i*(i+1))/2);
                    break;
                }
            }
        }
    }
    return 0;
}
