#include<stdio.h>
int main(void)
{
    int i,j,k,l,m,t,a,b,n;
    scanf("%d",&t);
    char answer[t][2005],ch='a';
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&a,&b);
        for(j=0,k=0,l=0;j<n;j++)
        {
            if(j%a==0)
            {
                l=0;
                k=0;
                m=0;
            }
            if(m%b==0&&m>0)
                k++;
            if(k%2==0)
            {
                answer[i][j]=ch+l;
                if(l!=b-1)
                    l++;
                m++;
            }
            else if(k%2!=0)
            {
                answer[i][j]=ch+l;
                if(l!=0)
                    l--;
                m++;
            }
        }
        answer[i][j]='\0';
    }
    for(i=0;i<t;i++)
        printf("%s\n",answer[i]);
    return 0;
}
