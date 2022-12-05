#include<stdio.h>
int main(void)
{
    int max,chest=0,biceps=0,back=0,n;
    scanf("%d",&n);
    int i,j,k,array[n];
    for(i=0,j=0,k=1;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i==j)
        {
            chest+=array[i];
            j+=3;
        }
        else if(i==k)
        {
            biceps+=array[i];
            k+=3;
        }
        else
        {
            back+=array[i];
        }
    }
    max=chest>back?chest>biceps?chest:biceps:back>biceps?back:biceps;
    if(max==chest)
    {
        printf("chest\n");
    }
    else if(max==biceps)
    {
        printf("biceps\n");
    }
    else
    {
        printf("back\n");
    }
    return 0;
}
