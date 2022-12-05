#include<stdio.h>
int main(void)
{
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=0,k=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<(n-k)/2)
                printf("%c",'*');
            else if(j>((n-k)/2+k-1))
                printf("%c",'*');
            else
                printf("%c",'D');
        }
        if(i+1>=n/2+1)
            k-=2;
        else
            k+=2;
        printf("\n");
    }
    return 0;
}
