#include<stdio.h>
int main(void)
{
    int y,count=0,temp,temp1,temp2,temp3,temp4,temp5;
    scanf("%d",&y);
    do
    {
        y+=1;
        temp=y/1000;
        temp1=y-temp*1000;
        temp2=temp1/100;
        temp3=temp1-temp2*100;
        temp4=temp3/10;
        temp5=temp3-temp4*10;
        if(temp!=temp2&&temp!=temp4&&temp!=temp5&&temp2!=temp4&&temp2!=temp5&&temp4!=temp5)
        {
            count++;
        }
    }while(count!=1);
    printf("%d",y);
}
