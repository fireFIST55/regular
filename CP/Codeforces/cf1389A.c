#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,j,m,k,t;
    scanf("%d",&t);
    long int x,y,l,r,answer[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&l,&r);
        for(j=l;j<=r;j++)
        {
            printf("I:%d\tJ:%d\n",i,j);
            if(l==1)
                k=1;
            else
                k=2;
            for(m=0;k<=sqrt(j);k++)
            {
                printf("K:%d\n",k);
                if(j%k==0)
                {
                    x=j/k;
                    y=j;
                    if((x>=l||y<=l)&&m==0)
                    {
                        if(x>=l&&m==0)
                        {
                            answer[i][0]=x;
                            m++;
                        }
                        else if(y>=l&&m==0)
                        {
                            answer[i][0]=y;
                            m++;
                        }
                        else if(x>=l)
                        {
                            answer[i][0]=x;
                            m++;
                            break;
                        }
                        else if(y>=l)
                        {
                            answer[i][0]=y;
                            m++;
                            break;
                        }
                    }
                }
                else if(j%k==0&&k>=l)
                {
                    printf("Two:%d\n",k);
                    answer[i][1]=k;
                    m++;
                    break;
                }
            }
            if(m==2)
                break;
        }
        printf("m:%d\n",m);
        if(m!=2)
        {
            answer[i][0]=-1;
            answer[i][1]=-1;
        }
    }
    for(i=0;i<t;i++)
        printf("%ld %ld\n",answer[i][0],answer[i][1]);
    return 0;
}
