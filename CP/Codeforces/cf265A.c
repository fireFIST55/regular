#include<stdio.h>
int main(void)
{
    char string[51],string1[51];
    int i,j,count=0;
    scanf("%s",string);
    scanf("%s",string1);
    for(i=0,j=0;string[i]!='\0'&&string1[j]!='\0';j++)
    {
        if(string[i]==string1[j])
        {
            count++;
            i++;
        }
    }
    printf("%d\n",count+1);
    return 0;
}
