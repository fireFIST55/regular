#include<stdio.h>
int main(void)
{
    int i,pearl=0,link=0;
    char string[105];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='o')
            pearl++;
        else
            link++;
    }
    if(!pearl||!(link%pearl))
        printf("%s\n","YES");
    else
        printf("%s\n","NO");
    return 0;
}
