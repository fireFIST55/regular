#include<stdio.h>
int main(void)
{
    char s[100000];
    int i,j,n,t;
    scanf("%d %d",&n,&t);
    scanf("%s",s);
    for(i=0;i<t;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    printf(s);
    return 0;
}
