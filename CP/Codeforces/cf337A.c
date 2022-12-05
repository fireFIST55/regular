#include<stdio.h>
int main(void)
{
    int i,j,dif,min,n,m;
    scanf("%d %d",&n,&m);
    int array[m];
    for(i=0;i<m;i++)
        scanf("%d",&array[i]);
    for(i=0;i<m-1;i++)
    {
        min=array[i];
        for(j=i+1;j<m;j++)
            min=min<array[j]?min:array[j];
        for(j=i+1;j<m;j++)
        {
            if(array[j]==min)
            {
                array[j]=array[i];
                array[i]=min;
                break;
            }
        }
    }
    min=array[m-1];
    for(i=n-1,j=0;i<m;i++,j++)
    {
        dif=array[i]-array[j];
        if(dif<min)
            min=dif;
    }
    printf("%d\n",min);
    return 0;
}
