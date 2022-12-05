#include<stdio.h>
int main(void)
{
    int n,temp,one,two,three,min,k;
    scanf("%d",&n);
    temp=n/3;
    int teams[temp][3],team=0,i,j,array[n],freq[3]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        freq[array[i]-1]++;
    }
    min=freq[0];
    for(i=1;i<3;i++)
    {
        min=min<freq[i]?min:freq[i];
    }
    for(i=0;i<min;i++)
    {
        for(j=0,one=0,two=0,three=0,k=0;j<n;j++)
        {
            if(array[j]==1&&one<1)
            {
                teams[i][k]=j+1;
                array[j]=0;
                one++;
                k++;
            }
            else if(array[j]==2&&two<1)
            {
                teams[i][k]=j+1;
                array[j]=0;
                two++;
                k++;
            }
            else if(array[j]==3&&three<1)
            {
                teams[i][k]=j+1;
                array[j]=0;
                three++;
                k++;
            }
            if(one==1&&two==1&&three==1)
            {
                break;
            }
        }
    }
    printf("%d\n",min);
    for(i=0;i<min;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",teams[i][j]);
        }
        printf("\n");
    }
}
