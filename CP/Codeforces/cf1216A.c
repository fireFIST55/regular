#include<stdio.h>
int main(void)
{
    int i,n,total=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i+=2)
    {
        if(string[i]=='a'&&string[i+1]=='a')
        {
            string[i]='b';
            total++;
        }
        else if(string[i]=='b'&&string[i+1]=='b')
        {
            string[i]='a';
            total++;
        }
    }
    printf("%d\n",total);
    printf("%s",string);
    return 0;
}
