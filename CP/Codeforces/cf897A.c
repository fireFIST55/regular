#include<stdio.h>
int main(void)
{
    int i,j,a,b,n,m,num,num1;
    scanf("%d %d",&n,&m);
    char string[n+1],operation[7];
    scanf("%s",string);
    for(i=0;i<2*m+1;i++)
    {
        gets(operation);
        a=operation[0]-49;
        b=operation[2]-49;
        for(j=a;j<=b;j++)
        {
            if(string[j]==operation[4])
                string[j]=operation[6];
        }
    }
    printf("%s\n",string);
    return 0;
}
