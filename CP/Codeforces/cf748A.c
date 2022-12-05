#include<stdio.h>
int main(void)
{
    int n,m,x,k,lane,row;
    scanf("%d %d %d",&n,&m,&k);
    char ch;
    if(k%(m*2)==0)
        lane=k/(m*2);
    else
        lane=k/(m*2)+1;
    x=k-(lane-1)*m*2;
    if(x%2!=0)
        row=x/2+1;
    else
        row=x/2;
    if(k%2!=0)
        ch='L';
    else
        ch='R';
    printf("%d %d %c\n",lane,row,ch);
    return 0;
}
