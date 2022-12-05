#include<stdio.h>
int main(void)
{
    int i,j,q,k,same;
    scanf("%d",&q);
    long long int a,b,c,array[3],pos,min;
    for(i=0;i<q;i++)
    {
        for(j=0;j<3;j++)
            scanf("%lld",&array[j]);
        for(j=0;j<2;j++)
        {
            pos=j;
            for(k=j+1;k<3;k++)
                pos=array[pos]>array[k]?k:pos;
            min=array[pos];
            array[pos]=array[j];
            array[j]=min;
        }
        for(j=0,same=0;j<3;j++)
        {
            if(array[j]==array[j+1]&&j+1<3)
                same++;
        }
        a=array[0];
        b=array[1];
        c=array[2];
        if(same==0)
        {
            a+=1;
            c-=1;
            k=0;
        }
        else if(same==1)
        {
            if(b==c&&b-a>1)
            {
                b-=1;
                c-=1;
                a+=1;
            }
            else if(b==c)
                a+=1;
            else if(a==b&&c-a>1)
            {
                c-=1;
                b+=1;
                a+=1;
            }
            else
                c-=1;
            k=0;
        }
        else
            k=1;
        if(k)
            printf("%d\n",0);
        else
            printf("%lld\n",b-a+c-b+c-a);
    }
    return 0;
}
