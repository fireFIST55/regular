#include<stdio.h>
int main(void)
{
    int i,a,n,even=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if((a&1))
            odd++;
        else
            even++;
    }
    if((odd&1))
        printf("%d\n",odd);
    else
        printf("%d\n",even);
    return 0;
}
