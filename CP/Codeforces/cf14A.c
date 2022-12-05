#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,m,i,j,k=0,x=0,first,second,prev_f=50,prev_s=0,start_r=0,end_c=0;
    scanf("%d %d",&n,&m);
    char string[n][m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
        for(j=0,first=0,second=0,k=0;string[i][j]!='\0';j++)
        {
            if(k==0)
            {
                if(string[i][j]=='*')
                {
                    first=j;
                    k++;
                }
            }
            if(string[i][j]=='*')
                second=j;
        }
        if(k>0)
        {
            if(x==0)
            {
                start_r=i;
                end_c=i;
                x++;
            }
            end_c=i;
            if(first<prev_f)
                prev_f=first;
            if(prev_s<second)
                prev_s=second;
        }
    }
    for(i=start_r;i<=end_c;i++)
    {
        for(j=prev_f;j<=prev_s;j++)
        {
            printf("%c",string[i][j]);
        }
        printf("\n");
    }
    return 0;
}
