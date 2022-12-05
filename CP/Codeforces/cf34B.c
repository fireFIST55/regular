#include<stdio.h>
int main(void)
{
    int i,j,max,m,n;
    scanf("%d %d",&n,&m);
    int temp,total=0,a,k,pos,earn[n];
    for(i=0,j=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<0)
        {
            earn[j]=(-1)*a;
            j++;
        }
    }
    for(i=0;i<j&&i<m;i++)
    {
        pos=i;
        for(k=i+1;k<j;k++)
            pos=earn[pos]<earn[k]?k:pos;
        temp=earn[i];
        earn[i]=earn[pos];
        earn[pos]=temp;
        total+=earn[i];
    }
    printf("%d\n",total);
    return 0;
}
