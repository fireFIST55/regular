#include<stdio.h>
int main(void)
{
    int i,j,l,g=0,t=0,n,k,max,min;
    scanf("%d %d",&n,&k);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='G')
            g=i;
        else if(string[i]=='T')
            t=i;
        if(g>0&&t>0)
            break;
    }
    max=g>t?g:t;
    min=g+t-max;
    if((max-min)%k==0)
    {
        if(max==g)
        {
            for(i=max-k,g=0;i>=min;i-=k)
            {
                if(string[i]=='#')
                    break;
                else if(string[i]=='T')
                {
                    printf("YES\n");
                    g++;
                    break;
                }
            }
            if(g==0)
                printf("NO\n");
        }
        else
        {
            for(i=min+k,g=0;i<=max;i+=k)
            {
                if(string[i]=='#')
                    break;
                else if(string[i]=='T')
                {
                    printf("YES\n");
                    g++;
                    break;
                }
            }
            if(g==0)
               printf("NO\n");
        }
    }
    else
        printf("NO\n");
    return 0;
}
