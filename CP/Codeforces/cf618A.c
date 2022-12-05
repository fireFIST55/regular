#include<stdio.h>
int main(void)
{
    int i,j=0,x,y,z,n,value,k=0;
    scanf("%d",&n);
    int answers[n];
    x=n/2;
    if(n%2!=0)
    {
        answers[k]=1;
        k++;
    }
    do
    {
        y=x/2;
        if(y>0)
            j++;
        value=2+j;
        if(x%2!=0)
        {
            if(x>1)
                answers[k]=value-1;
            else
                answers[k]=value;
            k++;
        }
        x=y;
    }while(y!=0);
    for(i=k-1;i>=0;i--)
        printf("%d ",answers[i]);
    return 0;
}
