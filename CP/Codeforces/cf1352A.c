#include<stdio.h>
int digit_idtf(int y);
int main(void)
{
    int t,i,j,temp,dummy,x,y,k;
    scanf("%d",&t);
    int array[t],answers[t][100],dummy1[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<t;i++)
    {
        if(array[i]<=10)
        {
            answers[i][0]=array[i];
            dummy1[i]=0;
        }
        else
        {
            y=array[i];
            dummy=digit_idtf(y);
            if(y%dummy==0)
            {
                dummy1[i]=0;
                answers[i][0]=array[i];
            }
            else
            {
                j=1;
                y=array[i];
                x=0;
                do
                {
                    if(y/dummy!=0)
                    {
                        dummy1[i]=j;
                        answers[i][x]=(y/dummy)*dummy;
                        j++;
                        x++;
                    }
                    temp=y-(y/dummy)*dummy;
                    y=temp;
                    dummy=digit_idtf(y);
                    if((y%dummy)==0)
                    {
                        j--;
                        dummy1[i]=j;
                        answers[i][x]=temp;
                        break;
                    }
                    else if(temp/10==0)
                    {
                        answers[i][x]=temp;
                        break;
                    }
                }while(dummy>=0);
            }

        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",dummy1[i]+1);
        for(k=0;k<dummy1[i]+1;k++)
        {
            printf("%d ",answers[i][k]);
        }
        printf("\n");
    }
    return 0;

}
int digit_idtf(int y)
{
    int i,j,x,temp;
    for(j=1;j<=10000;j++)
    {
        y/=10;
        x=y;
        if((x/=10)==0)
        {
            break;
        }
    }
    for(i=0,temp=1;i<j;i++)
    {
        temp*=10;
    }
    return temp;
}
