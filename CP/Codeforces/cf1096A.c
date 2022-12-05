#include<stdio.h>
int main(void)
{
    int t,i,array[2];
    scanf("%d",&t);
    int answers[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&array[0],&array[1]);
        answers[i][0]=array[0];
        answers[i][1]=array[0]*2;
    }
    for(i=0;i<t;i++)
    {
        printf("%d %d\n",answers[i][0],answers[i][1]);
    }
    return 0;
}
