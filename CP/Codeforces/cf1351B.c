#include<stdio.h>
int main(void)
{
    int i,t,a,b,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&x,&y);
        if((a==x&&b+y==x)||(b==y&&a+x==y)||(a==y&&b+x==a)||(b==x&&a+y==b))
            printf("%s\n","YES");
        else
            printf("%s\n","NO");
    }
    return 0;
}
