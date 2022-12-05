#include<stdio.h>
int main(void)
{
    char ch[105];
    gets(ch);
    int i,num,moves=0,max,min;
    num='a';
    for(i=0;ch[i]!='\0';i++)
    {
        max=ch[i]>num?ch[i]:num;
        min=ch[i]<num?ch[i]:num;
        if(max-min<13)
        {
            moves+=max-min;
        }
        else
        {
            moves+=min-max+26;
        }
        num=ch[i];
    }
    printf("%d\n",moves);
    return 0;
}
