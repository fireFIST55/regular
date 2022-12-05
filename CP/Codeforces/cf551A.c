#include<stdio.h>
int main(void)
{
    int i,j,max,n;
    scanf("%d",&n);
    int array[n],answers[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        answers[i]=array[i];
    }
    for(i=0;i<n-1;i++)
    {
        max=array[i];
        for(j=i+1;j<n;j++)
        {
            max=max>array[j]?max:array[j];
        }
        for(j=i+1;j<n;j++)
        {
            if(array[j]==max)
            {
                array[j]=array[i];
                array[i]=max;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(answers[i]==array[j])
            {
                answers[i]=j+1;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",answers[i]);
    }
    printf("\n");
    return 0;
}
