#include<stdio.h>
int main(void)
{
    int i,x=0,k=0,a=0,q=0,count=0;
    char string[101];
    gets(string);
    int freq[100];
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='Q')
        {
            q++;
            x=q;
            k=0;
        }
        else if(q>0&&string[i]=='A')
        {
            freq[a]=x;
            a++;
            k++;
        }
    }
    if(k!=0)
    {
        a-=k;
    }
    for(i=0;i<a;i++)
    {
        count+=freq[i]*(q-freq[i]);
    }
    printf("%d\n",count);
    return 0;
}
