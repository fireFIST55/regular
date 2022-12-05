#include<stdio.h>
int main(void)
{
    int i,j,same=0,robo=0,bionic=0,n;
    scanf("%d",&n);
    char string[2][n*2];
    for(i=0;i<2;i++)
        scanf(" %[^\n]",string[i]);
    for(i=0;i<n*2;i++)
    {
        if(string[0][i]=='1')
            robo++;
        if(string[1][i]=='1')
            bionic++;
        if(string[0][i]=='1'&&string[1][i]=='1')
            same++;
    }
    if(same==robo||!robo)
        printf("%d\n",-1);
    else
    {
        if(!bionic||robo>bionic)
            printf("%d\n",1);
        else if(!((bionic-same+1)%(robo-same)))
            printf("%d\n",(bionic-same+1)/(robo-same));
        else
            printf("%d\n",(bionic-same+1)/(robo-same)+1);
    }
    return 0;
}
