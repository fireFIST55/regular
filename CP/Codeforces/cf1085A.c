#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[51],impro[51];
    scanf("%s",string);
    int i,j,k,length=strlen(string);
    if(length%2==0)
    {
        i=(length/2)-1;
        j=length/2;
    }
    else
    {
        i=length/2;
        j=(length/2)+1;
    }
    for(k=0;;i--,j++)
    {
        if(i>=0)
        {
            impro[k]=string[i];
            k++;
        }
        if(j<length)
        {
            impro[k]=string[j];
            k++;
        }
        if(i<0&&j>=length)
            break;
    }
    impro[k]='\0';
    printf("%s\n",impro);
    return 0;
}
