#include<stdio.h>
int main(void)
{
    int i,in=0,row1,row2=0,j,n,m,col1,col2=0;
    scanf("%d %d",&n,&m);
    char string[m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        for(j=0;string[j]!='\0';j++)
        {
            if(string[j]=='B'&&in==0)
            {
                col1=i+1;
                row1=j+1;
                in++;
            }
            else if(string[j]=='B')
            {
                col2=i+1;
                row2=j+1;
            }
        }
    }
    if(col2==0)
        printf("%d %d\n",col1,row1);
    else
        printf("%d %d\n",(col1+col2)/2,(row1+row2)/2);
    return 0;
}
