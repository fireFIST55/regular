#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[100],temp[100];
    gets(string);
    int i,j,k=0,m=0,length=strlen(string),t=m;
    for(i=0,m;i<length;i++)
    {
        temp[m]=string[i];
        for(j=0;j<m;j++)
        {
            if(string[i]==temp[j])
            {
                m++;
            }
        }
        if(t==m)
        {
            for(j=i+1;j<length;j++)
            {
                if(string[i]==string[j])
                {
                    temp[m]=string[i];
                    m++;
                    k++;
                    t=m;
                }

            }
        }
        else
        {
            m--;
        }
    }
    length-=k;
    (length%2)==0?printf("CHAT WITH HER!"):printf("IGNORE HIM!");
    return 0;
}

