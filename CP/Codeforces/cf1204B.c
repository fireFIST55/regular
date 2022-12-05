#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n,l,r,min,max,temp;
    scanf("%d %d %d",&n,&l,&r);
    min=pow(2,(l-1))+pow(2,(l-1))-2+(n-l)+1;
    max=pow(2,(r-1))+pow(2,(r-1))-2+1+(n-r)*pow(2,(r-1));
    printf("%d %d\n",min,max);
    return 0;
}
