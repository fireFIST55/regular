#include<stdio.h>
int main(void)
{
    int w,h,k,i,j,total=0;
    scanf("%d %d %d",&w,&h,&k);
    for(i=0,j=0;i<k;i++,j+=2)
        total+=(w-2*j)*2+((h-2)-2*j)*2;
    printf("%d\n",total);
    return 0;
}
