#include<stdio.h>
int main(void)
{
    int i,j,t,n,x,max,array[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int freq[250]={0};
        scanf("%d %d",&n,&x);
        for(j=0,max=0;j<n;j++)
        {
            scanf("%d",&array[j]);
            freq[array[j]-1]++;
            max=max<array[j]?array[j]:max;
        }
        for(j=0;x||j<max;j++)
        {
            if(!freq[j])
                x--;
            if(!x)
            {
                j++;
                while(freq[j])
                    j++;
                break;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
