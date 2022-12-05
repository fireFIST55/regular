#include<stdio.h>
int main(void)
{
    int i,a,x,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(!(a%3)||!(a%7)||!((a%7)%3)||a>12)
            printf("%s\n","YES");
        else
            printf("%s\n","NO");
    }
    return 0;
}
