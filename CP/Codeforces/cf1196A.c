#include<stdio.h>
int main(void)
{
    int i,a,b,x,y,z=0,n;
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
    for(i=0;;i++,a++,b--)
    {
        if(!a)
            a=1;
        if(!b)
            b=n;
        if(a==b)
        {
            z=1;
            break;
        }
        else if(a==x||b==y)
            break;
    }
    if(z)
        printf("%s\n","YES");
    else
        printf("%s\n","NO");
    return 0;
}
