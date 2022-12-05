#include<stdio.h>
int main(void)
{
    int i,j,a,b,n,m;
    scanf("%d %d",&n,&m);
    char string[n+1],operation[8];
    scanf("%s",string);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        scanf(" %[^\n]",operation);
        for(j=a-1;j<b;j++)
        {
            if(operation[0]==string[j])
                string[j]=operation[2];
        }
    }
    printf("%s",string);
    return 0;
}
