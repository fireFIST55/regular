#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int i,j,white=0,black=0,value[26]={0};
    value[16]=9;
    value[17]=5;
    value[1]=3;
    value[13]=3;
    value[15]=1;
    char ch;
    for(i=0;i<8;i++)
    {
        for(j=0;j<9;j++)
        {
            scanf("%c",&ch);
            if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
            {
                if(isupper(ch))
                    white+=value[ch-65];
                else if(islower(ch))
                    black+=value[ch-97];
                }
        }
    }
    if(white<black)
        printf("Black\n");
    else if(white>black)
        printf("White\n");
    else
        printf("Draw\n");
    return 0;
}
