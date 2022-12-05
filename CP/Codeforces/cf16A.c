#include<stdio.h>
int main(void)
{
    int i,j,x=0,n,m,num,num1;
    scanf("%d %d",&n,&m);
    char string[m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        num=string[0]-48;
        if(i>0&&num1==string[0]-48)
            x++;
        if(x==0)
        {
            for(j=1;string[j]!='\0';j++)
            {
                if(num!=string[j]-48)
                    x++;
            }
            num1=string[0]-48;
        }
    }
    if(x>0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
