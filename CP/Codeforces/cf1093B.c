#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,k,m,l,t,length,last;
    scanf("%d",&t);
    char string[1005],string1[1005/2];
    for(i=0;i<t;i++)
    {
        scanf("%s",string);
        length=strlen(string);
        int array[length],freq[26]={0};
        if(!(length&1))
            last=length/2;
        else
            last=length/2+1;
        for(j=0,l=0,m=0,k=length/2-1;j<length;j++)
        {
            if(!freq[string[j]-97])
            {
                array[m]=string[j]-97;
                m++;
            }
            freq[string[j]-97]++;
            if(j<length/2)
                string1[j]=string[j];
            else if(j>=last&&!l)
            {
                string1[last]='\0';
                if(string[j]!=string1[k])
                    l=1;
                k--;
            }
        }
        if(l)
            printf("%s\n",string);
        else if(freq[string[0]-97]==length)
            printf("%d\n",-1);
        else
        {
            for(j=0;j<m;j++)
            {
                for(k=0;k<freq[array[j]];k++)
                    printf("%c",array[j]+97);
            }
            printf("\n");
        }
    }
    return 0;
}
