#include<stdio.h>
int main(void)
{
    long int s,t,x;
    scanf("%ld %ld %ld",&t,&s,&x);
    if(x<t)
        printf("%s\n","NO");
    else if(x==t)
        printf("YES\n");
    else
    {
        x-=t;
        if(!(x%s)||x%s==1&&x>s)
            printf("%s\n","YES");
        else
            printf("%s\n","NO");
    }
    return 0;
}
