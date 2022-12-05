#include<stdio.h>
int main(void)
{
    int i,j,n,d,count=0;
    scanf("%d %d",&n,&d);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';)
    {
        if(i+d<n-1)
        {
            for(j=i+d;j>i;j--)
            {
                if(string[j]=='1')
                    break;
            }
            if(j==i)
            {
                printf("%d\n",-1);
                break;
            }
            else
            {
                count++;
                i=j;
            }
        }
        else
        {
            printf("%d\n",count+1);
            break;
        }
    }
    return 0;
}
