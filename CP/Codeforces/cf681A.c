#include<stdio.h>
int main(void)
{
    int i,n,k=0,before,after;
    scanf("%d",&n);
    char string[11];
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        scanf("%d %d",&before,&after);
        if(after>before&&before>=2400)
            k++;
    }
    if(k>0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
