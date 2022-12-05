#include<stdio.h>
int main(void)
{
    int i,t,n,a,b,c,d;
    scanf("%d",&t);
    int answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        if((((a+b)*n)<=(c+d)&&((a+b)*n)>=(c-d))||(((a-b)*n)<=(c+d)&&((a-b)*n)>=(c-d)))
            answer[i]=1;
        else if(((c+d)<=(a+b)*n&&(c+d)>=(a-b)*n)||((c-d)<=(a+b)*n&&(c-d)>=(a-b)*n))
            answer[i]=1;
        else
            answer[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
