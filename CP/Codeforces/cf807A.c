#include<stdio.h>
int main(void)
{
    int i,k=1,n,a,b,prev,same=1,decreasing=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a!=b&&k)
        {
            same=0;
            k=0;
        }
        if(same)
        {
            if(i>0&&prev<a)
                decreasing=0;
            prev=a;
        }
    }
    if(!same)
        printf("%s\n","rated");
    else if(same&&!decreasing)
        printf("%s\n","unrated");
    else
        printf("%s\n","maybe");
    return 0;
}
