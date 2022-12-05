#include<stdio.h>
#include<string.h>
int main(void)
{
    int X=0,n,i,result=0;
    char string[4];
    scanf("%d",&n);
    if(n>=1&&n<=150)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",string);
            if(!strcmp(string,"X++"))
            {
                X++;
            }
            else if(!strcmp(string,"X--"))
            {
                X--;
            }
            else if(!strcmp(string,"++X"))
            {
                ++X;
            }
            else if(!strcmp(string,"--X"))
            {
                --X;
            }
        }
        printf("%d",X);
    }
    return 0;
}
