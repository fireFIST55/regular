#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,n,count[26][26]={0},pos=0,pos1=0,max=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=1,j=0;string[i]!='\0';i++,j++)
    {
       count[string[i-1]-65][string[i]-65]++;
       if(count[string[i-1]-65][string[i]-65]>max)
       {
           max=count[string[i-1]-65][string[i]-65];
           pos=string[i-1]-65;
           pos1=string[i]-65;
       }
    }
    printf("%c%c\n",pos+65,pos1+65);
    return 0;
}
