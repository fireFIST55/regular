#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int k,l,m,n;
    long int i,d,count=0;
    scanf("%d %d %d %d %ld",&k,&l,&m,&n,&d);
    if(k==1||l==1||m==1||n==1)
    {
        printf("%d",d);
        exit(0);
    }
    else
    {
        for(i=1;i<=d;i++)
        {
            if(i%k==0||i%l==0||i%m==0||i%n==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
