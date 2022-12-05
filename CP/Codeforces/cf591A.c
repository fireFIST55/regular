#include<stdio.h>
int main(void)
{
    int l,p,q;
    float t;
    scanf("%d %d %d",&l,&p,&q);
    t=l/((p+q)/1.0);
    printf("%f\n",p*t);
    return 0;
}
