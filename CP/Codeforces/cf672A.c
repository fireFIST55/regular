#include<stdio.h>
int main(void)
{
    int i,j,n,num,x=0;
    scanf("%d",&n);
    char string[5];
    if(n<10)
    {
        printf("%d\n",n);
    }
    else
    {
        for(i=10,num=10,j=0;i<=n;i++)
        {
            if(num<100)
            {
                j++;
                if(j==2&&i+1!=n+1)
                {
                    j=0;
                    num+=1;
                }
            }
            else if(num<1000)
            {
                j++;
                if(j==3&&i+1!=n+1)
                {
                    j=0;
                    num+=1;
                }
            }
        }
        itoa(num,string,10);
        printf("%c\n",string[j-1]);
    }
}
