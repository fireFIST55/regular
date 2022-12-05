#include<stdio.h>
int main(void)
{
    int i,j,k,n,t,x,y,z,array[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int freq[1000]={0};
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&array[j]);
        for(j=1;j<n-1;j++)
        {
            x=-1;
            y=-1;
            z=-1;
            if(array[j]>2)
            {
                for(k=0;k<j;k++)
                {
                    if(array[j]>array[k])
                    {
                        x=k;
                        break;
                    }
                }
                for(k=j+1;k<n;k++)
                {
                    if(array[j]>array[k])
                    {
                        z=k;
                        break;
                    }
                }
                if(x!=-1&&z!=-1)
                    y=j;
            }
            if(x!=-1&&y!=-1&&z!=-1)
                break;
        }
        if(x==-1||y==-1||z==-1)
            printf("NO\n");
        else
            printf("YES\n%d %d %d\n",x+1,y+1,z+1);
    }
    return 0;
}

