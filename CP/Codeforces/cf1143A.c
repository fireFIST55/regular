#include<stdio.h>
int main(void)
{
    int i,j,n,left=0,right=0;
    scanf("%d",&n);
    int array[n],left1=0,right1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]==0)
            left++;
        else
            right++;
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==0)
            left1++;
        else
            right1++;
        if(left1==left||right1==right)
            break;
    }
    printf("%d\n",i+1);
    return 0;
}
