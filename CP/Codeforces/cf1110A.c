#include<stdio.h>
int main(void)
{
    int i,a,b,x,k,even=0,odd=0;
    scanf("%d %d",&b,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a);
        if((((a&1)&!(b&1))||!(a&1)&&(b&1)||!(a&1)&&!(b&1))&&i<k-1)
            even++;
        else if(i==k-1&&!(a&1))
            even++;
        else
            odd++;
    }
    if(!(odd&1))
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}
