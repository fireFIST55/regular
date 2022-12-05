#include<stdio.h>
int main(void)
{
    int i,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        char string[x+2];
        scanf("%s",string);
        if(x==2&&((string[0]==string[1])||(string[0]>string[1])))
           printf("%s\n","NO");
        else
        {
            printf("%s\n%d\n","YES",2);
            printf("%c",string[0]);
            string[0]=' ';
            printf("%s\n",string);
        }
    }
    return 0;
}
