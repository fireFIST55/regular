#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    unsigned long long int a,x=0,y=0,total=0;
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a);
        total+=a;
    }
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a);
        if(x<a)
        {
            if(y<x)
                y=x;
            x=a;
        }
        else if(y<a)
            y=a;
    }
    if(x+y>=total)
        printf("%s\n","YES");
    else
        printf("%s\n","NO");
    return 0;
}
