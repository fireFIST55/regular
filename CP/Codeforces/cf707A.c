#include<stdio.h>
int main(void)
{
    int n,m,i,j,count=0;
    scanf("%d %d",&n,&m);
    char string[230];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m*2;j++)
        {
            scanf("%c",&string[j]);
        }
        for(j=0;j<m*2.;j++)
        {
            if(string[j]=='C'||string[j]=='M'||string[j]=='Y')
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("#Color");
    }
    else
    {
        printf("#Black&White");
    }
    return 0;
}

