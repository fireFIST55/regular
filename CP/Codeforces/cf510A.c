#include<stdio.h>
int main(void)
{
    int n,m,i,j,k=1,x=3;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
            {
                printf("#");
            }
            else if(i==k)
            {
                if(j==m-1)
                {
                    printf("#");
                    k+=4;
                }
                else if(j<m)
                {
                    printf(".");
                }
            }
            else if(i==x)
            {
                if(j==0)
                {
                    printf("#");
                }
                else if(j>0&&j<m-1)
                {
                    printf(".");
                }
                else if(j==m-1)
                {
                    printf(".");
                    x+=4;
                }

            }
        }
        printf("\n");
    }
}
