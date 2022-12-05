#include<stdio.h>
int main(void)
{
    int i,n,m,z,max,min;
    scanf("%d %d %d",&n,&m,&z);
    max=n>m?n:m;
    min=n<m?n:m;
    for(i=1;;i++)
    {
        if(max*i%min==0)
        {
            max*=i;
            break;
        }
    }
    printf("%d\n",z/max);
    return 0;
}
