#include<stdio.h>
int main(void)
{
    int i,j,k,l,n,t;
    scanf("%d",&t);
    char string[t][101];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        for(j=0,l=97;j<n;j++,l++)
        {
            if(l==97+k-1)
            {
                string[i][j]=l;
                l=96;
            }
            else
                string[i][j]=l;
        }
        string[i][j]='\0';
    }
    for(i=0;i<t;i++)
    {
        printf("%s\n",string[i]);
    }
    return 0;
}
