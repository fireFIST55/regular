#include<stdio.h>
int main(void)
{
    int i,j,k,l,n,x;
    scanf("%d",&n);
    long int array[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%ld",&array[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[i][j]!=1)
            {
                for(k=n,x=0;k>=0;k--)
                {
                    for(l=0;l<n;l++)
                    {
                        if(l!=i&&k!=j)
                        {
                            if(array[l][j]+array[i][k]==array[i][j])
                            {
                                x++;
                                break;
                            }
                        }
                    }
                    if(x==1)
                        break;
                }
                if(x==0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}
