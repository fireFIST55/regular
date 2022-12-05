#include<stdio.h>
int main(void)
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int sequence[n],finger[m];
    for(i=0;i<n;i++)
        scanf("%d",&sequence[i]);
    for(i=0;i<m;i++)
        scanf("%d",&finger[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(sequence[i]==finger[j])
            {
                printf("%d ",sequence[i]);
                finger[j]=-1;
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
