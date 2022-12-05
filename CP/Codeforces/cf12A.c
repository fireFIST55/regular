#include<stdio.h>
int main(void)
{
    int i,j,k,x=0,x_axis=1,y_axis=1;
    char string[3][4],ch;
    for(i=0;i<3;i++)
        scanf("%s",string[i]);
    for(i=0;i<3;i++)
    {
        for(k=0,j=2;k<3,j>=0;k++,j--)
        {
            if(string[0][k]!=string[2][j])
            {
                x++;
                break;
            }
        }
        if(x==0)
        {
            for(j=0,k=2;j<3,k>=0;j++,k--)
            {
                if(string[j][0]!=string[k][2])
                {
                    x++;
                    break;
                }
            }
        }
    }
    if(x==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
