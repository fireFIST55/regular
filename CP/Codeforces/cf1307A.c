#include<stdio.h>
int main(void)
{
    int i,j,n,d,t,array[100];
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&d);
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[j]);
            if(j>0)
            {
                if(d>=j*array[j])
                {
                    array[0]+=array[j];
                    d-=j*array[j];
                }
                else
                {
                    if(d/j>0)
                    {
                        array[0]+=d/j;
                        d=0;
                    }
                }
            }
        }
        answers[i]=array[0];
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 00;
}
