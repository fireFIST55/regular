#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i,j,k,l,length,length1,min,count=0;
    char string[200005],string1[200005];
    scanf("%s",string);
    scanf("%s",string1);
    length=strlen(string);
    length1=strlen(string1);
    min=length<length1?length:length1;
    count+=(length-min)+(length1-min);
    for(i=length-min,k=length1-min;string[i]!='\0';i++,k++)
    {
        if(string[i]==string1[k])
        {
            j=i+1;
            l=k+1;
            while(string[j]==string1[l]&&string[j]!='\0')
            {
                j++;
                l++;
            }
            if(j==length)
            {
                printf("%d\n",count);
                exit(0);
            }
            else
            {
                count+=(j-i+1)*2;
                i=j;
                k=l;
            }
        }
        else
            count+=2;
    }
    printf("%d\n",count);
    return 0;
}
