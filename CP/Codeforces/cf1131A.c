#include<stdio.h>
int main(void)
{
    long int w1,h1,w2,h2,total;
    scanf("%ld %ld %ld %ld",&w1,&h1,&w2,&h2);
    if(w1>w2)
        total=(w1+2)+(w1+2-w2)+h1*2+h2*2+w2;
    else if(w2>w1)
        total=(w2+2)+(w2+2-w1)+h2*2+h1*2+w1;
    else
        total=(w1+2)*2+(h1+h2)*2;
    printf("%d\n",total);
    return 0;
}
