#include<stdio.h>
#include<string.h>
int main(void)
{
    char keyboard[31]="qwertyuiopasdfghjkl;zxcvbnm,./",string[101],ch;
    scanf("%c %s",&ch,string);
    char answer[strlen(string)+1];
    int layout[30],i,j,k,x;
    for(i=0;keyboard[i]!='\0';i++)
    {
        if(keyboard[i]>=97&&keyboard[i]<=122)
            layout[keyboard[i]-97]=i;
        else
        {
            if(keyboard[i]==59)
                layout[keyboard[i]-30]=i;
            else if(keyboard[i]==46)
                layout[keyboard[i]-19]=i;
            else if(keyboard[i]==44)
                layout[keyboard[i]-18]=i;
            else if(keyboard[i]==47)
                layout[keyboard[i]-19]=i;
        }
    }
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]>=97&&string[i]<=122)
            x=layout[string[i]-97];
        else if(string[i]==59)
            x=layout[string[i]-30];
        else if(string[i]==46)
            x=layout[string[i]-19];
        else if(string[i]==44)
            x=layout[string[i]-18];
        else if(string[i]==47)
            x=layout[string[i]-19];
        if(ch=='R'&&(x==0||x==10||x==20))
            answer[i]=keyboard[x];
        else if(ch=='L'&&(x==9||x==19||x==29))
            answer[i]=keyboard[x];
        else if(ch=='R')
            answer[i]=keyboard[x-1];
        else if(ch=='L')
            answer[i]=keyboard[x+1];
    }
    answer[i]='\0';
    printf("%s\n",answer);
    return 0;
}
