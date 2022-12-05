#include<stdio.h>
#include<string.h>
void sort(char *string);
int main(void)
{
    char string[1005];
    int i,j,n,count=0;
    gets(string);
    sort(string);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]>=97&&string[i]<=122)
        {
            count++;
            if(string[i]==string[i-1])
            {
                count--;
            }
        }
    }
    printf("%d",count);
    return 0;
}
void sort(char *string)
{
    int i,j,max;
    for(i=0;i<strlen(string)-2;i++)
    {
        max=*(string+i);
        for(j=i+1;j<strlen(string)-1;j++)
        {
            max=max>*(string+j)?max:*(string+j);
        }
        for(j=i+1;j<strlen(string)-1;j++)
        {
            if(*(string+j)==max)
            {
                *(string+j)=*(string+i);
                *(string+i)=max;
            }
        }
    }
}
