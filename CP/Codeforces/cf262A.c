#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int i,j,x,n,k,num,count=0;
    scanf("%d %d",&n,&k);
    char string[10];
    for(j=0,x=0;j<n;j++)
    {
        scanf("%ld",&num);
        itoa(num,string,10);
        for(i=0,x=0;i<strlen(string);i++)
        {
            if(string[i]=='4'||string[i]=='7')
            {
                x++;
            }
            if(x>k)
                break;
        }
        if(x<=k)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
