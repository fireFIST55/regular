#include<stdio.h>
int main(void)
{
    int i,a,b,c,d,vasya,vasya1,misha,misha1,max,max1;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    misha=a-(a*c)/250;
    misha1=(3*a)/10;
    max=misha<misha1?misha1:misha;
    vasya=b-(b*d)/250;
    vasya1=(3*b)/10;
    max1=vasya<vasya1?vasya1:vasya;
    if(max1<max)
        printf("%s\n","Misha");
    else if(max1>max)
        printf("%s","Vasya");
    else
        printf("%s","Tie");
    return 0;
}
