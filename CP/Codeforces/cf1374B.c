#include<stdio.h>
int main(void)
{
    int i,j,t,count;
    scanf("%d",&t);
    int answer[t];
    long int n;
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        for(j=0,count=0;;j++)
        {
            if(n%6==0)
            {
                n/=6;
                count++;
            }
            else
            {
                if((n*2)%6==0)
                {
                    n=(n*2)/6;
                    count+=2;
                }
                else if((n*4)%6==0)
                {
                    n=(n*4)/6;
                    count+=3;
                }
                else
                    break;
            }
            if(n==1)
                break;
        }
        if(n==1)
            answer[i]=count;
        else
            answer[i]=-1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",answer[i]);
    return 0;
}
