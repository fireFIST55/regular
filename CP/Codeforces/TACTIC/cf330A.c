#include<stdio.h>
int main(void)
{
    int i,j,k=0,r,c,count=0;
    scanf("%d %d",&r,&c);
    char string[r][c+1];
    for(i=0;i<r;i++)
    {
        scanf("%s",string[i]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(string[i][j]=='.')
            {
                string[i][j]='X';
            }
            else
            {
                for(k=j-1;k>=0;k--)
                {
                    string[i][k]='.';
                }
                break;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(string[j][i]=='.')
            {
                string[j][i]='Y';
            }
            else if(string[j][i]=='S')
            {
                for(k=j-1;k>=0;k--)
                {
                    if(string[k][i]=='Y')
                    {
                        string[k][i]='.';
                    }
                }
                break;
            }
        }
    }
    for(i=0,count=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(string[i][j]=='X'||string[i][j]=='Y')
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
