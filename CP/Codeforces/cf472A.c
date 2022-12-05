#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    n%2==0?printf("%d %d",4,(n-4)):printf("%d %d",9,(n-9));
    return 0;
}
