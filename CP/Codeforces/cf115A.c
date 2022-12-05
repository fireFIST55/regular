#include<stdio.h>
int main(void)
{
    int i,k=0,l=0,a,n,sup[2000],nor[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==-1)
        {
            k++;
            sup[i]++;
        }
        else
        {
            sup[a-1]++;
            if(sup[a-1]==1)
                k++;
            nor[i]++;
            if(nor[i]==1)
                l++;
        }
    }
    if(l+k==n&&k>0&&l>0)
        printf("%d\n",2);
    if(k==0||l==0)
        printf("%d\n",1);
    else
        printf("%d\n",3);
    return 0;
}
