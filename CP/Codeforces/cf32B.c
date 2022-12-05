#include<stdio.h>
int main(void)
{
    int i,k,array[200];
    char string[201];
    scanf("%s",string);
    for(i=0,k=0;string[i]!='\0';i++)
    {
        if(string[i]=='.')
        {
            array[k]=0;
            k++;
        }
        else if(string[i]=='-')
        {
            if(string[i+1]=='.')
            {
                array[k]=1;
                k++;
                i++;
            }
            else
            {
                array[k]=2;
                k++;
                i++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}
