#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,k,n,m,x=0,max=0,count,answers[50];
    scanf("%d %d",&n,&m);
    char string[n+1];
    for(i=0;i<m;i++)
    {
        scanf("%s",string);
        for(j=0,k=0;string[j]!='\0';j++)
        {
            if(string[j]=='0')
            {
                k++;
                break;
            }
        }
        if(k>0)
            x++;
        else
        {
             max=x>max?x:max;
             x=0;
        }
    }
    if(x!=0)
        max=x>max?x:max;
    printf("%d\n",max);
    return 0;
}
