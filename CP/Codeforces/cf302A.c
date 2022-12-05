#include<stdio.h>
int main(void)
{
    int i,j,l,r,a,one=0,minus=0,sum,n,m;
    scanf("%d %d",&n,&m);
    int array[n],answers[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
            one++;
        else
            minus++;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&l,&r);
        if((r-l)%2==0)
            answers[i]=0;
        else
        {
            if((r-l+1)/2<=one&&(r-l+1)/2<=minus)
                answers[i]=1;
            else
                answers[i]=0;
        }
    }
    for(i=0;i<m;i++)
        printf("%d\n",answers[i]);
    return 0;
}
