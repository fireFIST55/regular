#include<stdio.h>
int main(void)
{
    char array[100],array1[100],answer[100];
    gets(array);
    gets(array1);
    int i;
    for(i=0;array[i]!='\0';i++)
    {
        if(array[i]!=array1[i])
        {
            answer[i]='1';
        }
        else
        {
            answer[i]='0';
        }
    }
    answer[i]='\0';
    printf(answer);
    return 0;
}
