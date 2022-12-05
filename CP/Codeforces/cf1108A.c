#include<stdio.h>
int main(void)
{
    int i,q;
    scanf("%d",&q);
    int answers[q][2],l1,l2,r1,r2;
    for(i=0;i<q;i++)
    {
        scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
        if(r1!=r2)
        {
            answers[i][0]=r1;
            answers[i][1]=r2;
        }
        else
        {
            answers[i][0]=r1;
            answers[i][1]=r2-1;
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%d %d\n",answers[i][0],answers[i][1]);
    }
    return 0;
}
