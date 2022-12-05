#include<stdio.h>
#include<math.h>
int calc(char answer[],int a);
int main(void)
{
    int i,j,k,t,x1,x2,max,max1;
    scanf("%d",&t);
    long int a,b,n;
    long long int result;
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&n);
        if(!(n%3))
            printf("%ld\n",a);
        else if(n%3==1)
            printf("%ld\n",b);
        else if(n%3==2)
        {
            char answer[50],answer1[50],bin[50],bin1[50];
            max=calc(answer,a);
            for(j=max,k=0;j>=0;k++,j--)
                bin[k]=answer[j];
            bin[max+1]='\0';
            max1=calc(answer1,b);
            for(j=max1,k=0;j>=0;k++,j--)
                bin1[k]=answer1[j];
            bin1[max1+1]='\0';
            for(j=max,k=max1,result=0;;j--,k--)
            {
                if(j<0&&k<0)
                    break;
                else
                {
                    if(j<0||bin[j]=='0')
                        x1=0;
                    else if(bin[j]=='1')
                        x1=1;
                    if(k<0||bin1[k]=='0')
                        x2=0;
                    else if(bin1[k]=='1')
                        x2=1;
                    if(x1+x2==1)
                    {
                        if(x1)
                            result+=pow(2,(max-j));
                        else
                            result+=pow(2,(max1-k));
                    }
                }
            }
            printf("%lld\n",result);
        }
    }
    return 0;
}
int calc(char answer[],int a)
{
    int j,x,max=-1,freq[50]={0};
    double y;
    while(a)
    {
        y=log(a)/log(2);
        x=y;
        max=max<x?x:max;
        answer[x]='1';
        freq[x]++;
        a-=pow(2,x);
    }
    for(j=0;j<max;j++)
    {
        if(!freq[j])
            answer[j]='0';
    }
    answer[max+1]='\0';
    return max;
}
