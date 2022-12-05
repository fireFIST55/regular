#include<stdio.h>
int main(void)
{
    int i,j,max,array[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<3;i++)
    {
        max=array[i];
        for(j=i+1;j<4;j++)
        {
            max=max>array[j]?max:array[j];
        }
        for(j=i+1;j<4;j++)
        {
            if(max==array[j])
            {
                array[j]=array[i];
                array[i]=max;
                break;
            }
        }
    }
    if(array[0]==(array[1]+array[2]+array[3])||(array[0]+array[3])==array[1]+array[2])
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
