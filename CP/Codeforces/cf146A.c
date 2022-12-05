#include<stdio.h>
int main(void)
{
    int i,first=0,second=0,n,num;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        num=string[i]-48;
        if((num==4||num==7)&&i<n/2)
            first+=num;
        else if((num==4||num==7)&&i>=n/2)
            second+=num;
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    if(first==second)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
