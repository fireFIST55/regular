#include<stdio.h>
int main(void)
{
    int l,r,a;
    scanf("%d %d %d",&l,&r,&a);
    if(l==0&&a==0||r==0&&a==0)
    {
        printf("%d\n",0);
    }
    else
    {
        if(l<r)
        {
            if(l+a>=r)
            {
                if((l+r+a)%2==0)
                    printf("%d\n",l+a+r);
                else
                    printf("%d\n",l+r+a-1);
            }
            else
                printf("%d\n",(l+a)*2);
        }
        else if(r<l)
        {
            if(r+a>=l)
            {
                if((l+r+a)%2==0)
                    printf("%d\n",l+a+r);
                else
                    printf("%d\n",l+r+a-1);
            }
            else
                printf("%d\n",(r+a)*2);
        }
        else if(l==r)
        {
            if((l+r+a)%2!=0)
                printf("%d\n",l+r+a-1);
            else
                printf("%d\n",l+r+a);
        }
    }
    return 0;
}
