#include<stdio.h>
int main(void)
{
    int x,y,z,max,min,result;
    scanf("%d %d %d",&x,&y,&z);
    result=x-y;
    max=x>y?x:y;
    min=x+y-max;
    if(max-min>z||z==0)
    {
        if(result>0)
        {
            printf("+\n");
        }
        else if(result<0)
        {
            printf("-\n");
        }
        else
            printf("0");
    }
    else
        printf("?\n");
    return 0;
}
