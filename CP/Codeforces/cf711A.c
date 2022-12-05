#include<stdio.h>
int main(void)
{
    int n,i,count=0;
    scanf("%d",&n);
    char string[n][10];
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
        if(string[i][0]=='O'&&string[i][1]=='O'&&count==0)
        {
            string[i][0]='+';
            string[i][1]='+';
            count++;
        }
        else if(string[i][3]=='O'&&string[i][4]=='O'&&count==0)
        {
            string[i][3]='+';
            string[i][4]='+';
            count++;
        }
    }
    if(count>0)
    {
        printf("YES\n");
        for(i=0;i<n;i++)
        {
            printf("%s\n",string[i]);
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
