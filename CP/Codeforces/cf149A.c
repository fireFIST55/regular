#include<stdio.h>
int main(void)
{
    int i,j,k,total=0,max,growth[12];
    scanf("%d",&k);
    for(i=0;i<12;i++)
        scanf("%d",&growth[i]);
    if(k>0)
    {
        for(i=0;i<11;i++)
        {
            max=growth[i];
            for(j=i+1;j<12;j++)
                max=max>growth[j]?max:growth[j];
            for(j=i+1;j<12;j++)
            {
                if(max==growth[j])
                {
                    growth[j]=growth[i];
                    growth[i]=max;
                    break;
                }
            }
        }
    }
    if(k==0)
        printf("%d\n",0);
    else
    {
        for(i=0;i<12;i++)
        {
            total+=growth[i];
            if(total>=k)
                break;
        }
        if(total>=k)
            printf("%d\n",i+1);
        else
            printf("%d\n",-1);
    }
    return 0;
}
