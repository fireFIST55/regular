#include<stdio.h>
int main(void)
{
    int i,center,array[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
    center=array[0]>array[1]?(array[0]>array[2])?(array[0]>array[3])?array[0]:array[3]:(array[2]>array[3])?array[2]:array[3]:(array[1]>array[2])?(array[1]>array[3])?array[1]:array[3]:(array[2]>array[3])?array[2]:array[3];
    for(i=0;i<4;i++)
    {
        if(array[i]!=center)
        {
            printf("%d ",center-array[i]);
        }
    }
    return 0;
}
