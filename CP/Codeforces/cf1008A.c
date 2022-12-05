#include<stdio.h>
int main(void)
{
    int i,k=1;
    char string[103];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if((string[i]!='a'&&string[i]!='e'&&string[i]!='i'&&string[i]!='o'&&string[i]!='u'&&string[i]!='n')&&(string[i+1]!='a'&&string[i+1]!='e'&&string[i+1]!='i'&&string[i+1]!='o'&&string[i+1]!='u'))
        {
            k=0;
            break;
        }
    }
    if(k)
        printf("%s\n","YES");
    else
        printf("%s\n","NO");
    return 0;
}
