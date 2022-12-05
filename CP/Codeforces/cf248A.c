#include<stdio.h>
int main(void)
{
    int i,a,b,n,min1,min2,left_open=0,left_close=0,right_open=0,right_close=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==0)
            left_close++;
        else if(a==1)
            left_open++;
        if(b==1)
            right_open++;
        else
            right_close++;
    }
    min1=left_close<left_open?left_close:left_open;
    min2=right_open<right_close?right_open:right_close;
    printf("%d\n",min1+min2);
    return 0;
}
