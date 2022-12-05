#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d\n",n*(n/2));
    }
    else
        printf("%d\n",(n/2+1)*(n/2+1)+(n/2)*(n/2));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;)
        {
            if(i%2==0&&n%8==0)
            {
                printf("C.C.C.C.");
                j+=8;
            }
            else if(i%2==0&&n%4==0)
            {
                printf("C.C.");
                j+=4;
            }
            else if(i%2!=0&&n%4==0)
            {
                printf(".C.C");
                j+=4;
            }
            else if(i%2==0&&n%2==0)
            {
                printf("C.");
                j+=2;
            }
            else if(i%2==0&&n%2!=0)
            {
                if(j+2>=n)
                {
                    printf("C");
                    j++;
                }
                else
                {
                    printf("C.");
                    j+=2;
                }
            }
            else if(1%2==0&&n%4==0)
            {
                printf(".C.C.C.C");
                j+=8;
            }
            else if(i%2!=0&&n>=2&&n%2!=0)
            {
                if(j+2>=n)
                {
                    printf(".");
                    j++;
                }
                else
                {
                    printf(".C");
                    j+=2;
                }
            }
            else if(i%2!=0&&n%2==0)
            {
                printf(".C");
                j+=2;
            }
            else if(i%2!=0&&n==1)
            {
                printf("C");
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}
