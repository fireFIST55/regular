#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[22];
    scanf("%s",string);
    int i,k=0,length=strlen(string),x=1,extra,freq[26]={0};
    if(length==1)
        extra=1;
    else
    {
        for(i=0,x=0;i<length;i++)
        {
            if(!freq[string[i]-97])
                x++;
            freq[string[i]-97]++;
            if(freq[string[i]-97]>1)
                k++;
        }
        extra=length*x;
    }
    printf("%d\n",(26-x)*(length+1)+extra-k);
    return 0;
}
