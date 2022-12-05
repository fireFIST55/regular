#include<stdio.h>
int main(void)
{
    int i,j,n,length=25,length1;
    scanf("%d",&n);
    char string[n][21];
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
        if(i>0)
        {
            for(j=0,length1=0;string[j]!='\0';j++)
            {
                if(string[i][j]==string[i-1][j])
                    length1++;
                else
                    break;
            }
            if(length1<length)
                length=length1;
        }
    }
    printf("%d",length);
    return 0;
}
