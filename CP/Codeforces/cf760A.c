#include<stdio.h>
int main(void)
{
    int m,d,array[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d",&m,&d);
    if(array[m-1]==31)
    {
        if(d==6||d==7)
            printf("%d\n",6);
        else
            printf("%d\n",5);
    }
    else if(array[m-1]==30)
    {
        if(d==7)
            printf("%d\n",6);
        else
            printf("%d\n",5);
    }
    else
    {
        if(d==1)
            printf("%d\n",4);
        else
            printf("%d\n",5);
    }
    return 0;
}
