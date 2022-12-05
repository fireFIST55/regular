#include<stdio.h>
int main(void)
{
    int i,j,n,a,b,c,sum_one=0,one=0,sum_two=0,two=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==1)
        {
            sum_one+=b;
            one++;
        }
        else
        {
            sum_two+=b;
            two++;
        }
    }
    if(sum_one>=(10*one)/2)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    if(sum_two>=(10*two)/2)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    return 0;
}
