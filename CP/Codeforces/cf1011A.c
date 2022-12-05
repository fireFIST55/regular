#include<stdio.h>
int main(void)
{
    int i,x=0,y,total=0,n,k,freq[26]={0};
    scanf("%d %d",&n,&k);
    char string[n+2];
    y=n;
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
        freq[string[i]-97]++;
    for(i=0;i<26;i++)
    {
        if(freq[i])
        {
            if(!x)
            {
                x=i+1;
                k-=1;
                total+=i+1;
            }
            else if(i-x+1>=2)
            {
                k--;
                x=i+1;
                total+=i+1;
            }
            y-=freq[i];
        }
        if(!k||k>y)
            break;
    }
    if(!k)
        printf("%d\n",total);
    else
        printf("%d\n",-1);
    return 0;
}
