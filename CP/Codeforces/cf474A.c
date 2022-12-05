#include<stdio.h>
#include<string.h>
int main(void)
{
    char keypad[31]="qwertyuiopasdfghjkl;zxcvbnm,./",string[101],ch;
    scanf("%c %s",&ch,string);
    char answer[strlen(string)+1];
    int layout[30][2],i,j,k,x;
    if(ch=='R')
        j=-1;
    else
        j=1;
    for(i=0;keypad[i]!='\0';i++)
    {
        if(keypad[i]>=97&&keypad<=122)
            layout[keypad[i]-97][0]=i;
        else
        {
            if(keyboard[i]==59)
                layout[keyboard[i]-40]=i;
            else if(keyboarf[i]==46)
                layout[keyboard[i]-18]=i;
            else if(keyboard[i]==44)
                layout[keyboard[i]-17]=i;
            else if(keyboard[i]==47)
                layout[keyboard[i]-18]=i;
        }
    }
    for(i=0;string[i]!=='\0';i++)
    {
        if(string[i]>=97&&string[i]<=122)
        {
            x=layout[string[i]-97];
            if()
        }
    }
}
