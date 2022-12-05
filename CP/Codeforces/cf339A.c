#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char s[101],ch;
    int i,j=0,array[50],length,max,temp;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i-1]=='+')
        {
            ch=s[i];
            array[j]=atoi(ch);
            j++;
        }
    }
    int total=j;
    for(i=0;i<total;i++)
    {
        printf("%2d",array[i]);
    }
    printf("\n");
    for(i=0;i<total;i++)
    {
        max=array[i];
        for(j=i+1;j<total-1;j++)
        {
            max=(max>array[j])?max:array[j];
        }
        if(array[i]!=max)
        {
            for(j=i+1;j<total;j++)
            {
                if(max==array[j])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    }
    for(i=0;i<total;i++)
    {
        printf("%2d",array[i]);
    }
    return 0;
}
