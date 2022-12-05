#include<stdio.h>
int main(void)
{
    char string[105];
    int i,j,x=0,count=0;
    for(i=0;i<3;i++)
    {
        scanf(" %[^\n]",string);
        if(x==0)
        {
            for(j=0,count=0;string[j]!='\0';j++)
            {
                if(string[j]=='a'||string[j]=='e'||string[j]=='i'||string[j]=='o'||string[j]=='u')
                    count++;
            }
            if((i==0||i==2)&&count!=5)
                x++;
            else if(i==1&&count!=7)
                x++;
        }
    }
    if(x!=0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
