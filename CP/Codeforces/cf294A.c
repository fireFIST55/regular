#include<stdio.h>
int main(void)
{
    int i,j,a,b,n;
    scanf("%d",&n);
    int array[n],m;
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        if(array[a-1]>=b)
        {
            if(a-1>=1)
                array[a-2]+=(b-1);
            if(a+1<=n)
                array[a]+=(array[a-1]-b);
            array[a-1]=0;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",array[i]);
    return 0;
}
