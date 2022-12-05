#include<stdio.h>
int main(void)
{
    int freq[50]={0},height[50]={0},i,j,n,h,m,profit=0,current,former=1000;
    scanf("%d %d %d",&n,&h,&m);
    int restrictions[m][3];
    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&restrictions[i][0],&restrictions[i][1],&restrictions[i][2]);
        if(restrictions[i][0]!=restrictions[i][1])
        {
            for(j=restrictions[i][0];j<=restrictions[i][1];j++)
            {
                freq[j-1]++;
                if(freq[j-1]>1)
                {
                    if(height[j-1]>restrictions[i][2])
                        height[j-1]=restrictions[i][2];
                }
                else
                    height[j-1]=restrictions[i][2];
            }
        }
        else
        {
            freq[restrictions[i][0]-1]++;
            if(freq[restrictions[i][0]-1]>1)
            {
                if(height[restrictions[i][0]-1]>restrictions[i][2])
                    height[restrictions[i][0]-1]=restrictions[i][2];
            }
            else
                height[restrictions[i][0]-1]=restrictions[i][2];
        }
    }
    for(i=0;i<n;i++)
    {
        if(freq[i]==0)
            profit+=h*h;
        else
        {
            profit+=height[i]*height[i];
        }
    }
    printf("%d\n",profit);
    return 0;
}
