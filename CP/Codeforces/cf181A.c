#include<stdio.h>
int main(void)
{
    int i,j,k=0,indices[3][2],n,m,col1,col2,row,col;
    scanf("%d %d",&n,&m);
    char string[m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        for(j=0;string[j]!='\0';j++)
        {
            if(string[j]=='*')
            {
                indices[k][0]=i;
                indices[k][1]=j;
                if(k>0)
                {
                    if(indices[k][0]==indices[k-1][0])
                    {
                        col1=indices[k][1];
                        col2=indices[k-1][1];
                        if(k==1)
                            row=2;
                        else
                            row=0;
                    }
                }
                k++;
            }
        }
        if(i==n-1)
        {
            if(indices[row][1]==col1)
                col=col2+1;
            else
                col=col1+1;
        }
    }
    printf("%d %d\n",indices[row][0]+1,col);
    return 0;
}
