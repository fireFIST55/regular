#include<stdio.h>
int main(void)
{
    int i,j,x,k,n,t,first,array[100];
    scanf("%d",&t);
    int answers[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,x=0,k=0;j<n;j++)
        {
            scanf("%d",&array[j]);
            if(array[j]%2==0&&x<1)
            {
                answers[i][1]=j+1;
                answers[i][0]=0;
                x++;
            }
            else if(x==0&&k<2)
            {
                answers[i][k]=j+1;
                k++;
            }
        }
        if(k!=2&&x==0)
        {
            answers[i][0]=-1;
        }
    }
    for(i=0;i<t;i++)
    {
        first=answers[i][0];
        if(first==0)
        {
            printf("1\n%d\n",answers[i][1]);
        }
        else if(first==-1)
        {
            printf("%d\n",first);
        }
        else
        {
            printf("2\n%d %d\n",answers[i][0],answers[i][1]);
        }
    }
    return 0;
}
