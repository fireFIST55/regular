#include<stdio.h>
int main(void)
{
    char a[101],b[101],c[101];
    int t,i,j,k;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        scanf("%s",c);
        for(j=0,k=0;c[j]!='\0';j++)
        {
            if(c[j]!=a[j])
            {
                a[j]=c[j];
            }
            else if(c[j]!=b[j])
            {
                b[j]=c[j];
            }
            if(a[j]!=b[j])
            {
                answers[i]=0;
                k++;
                break;
            }
        }
        if(k==0)
        {
            answers[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i]==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
