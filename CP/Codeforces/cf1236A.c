#include<stdio.h>
int main(void)
{
    int i,x,y,t,a,b,c,max,min,count,count1;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=a;
        y=b/2;
        min=x<y?x:y;
        count=min+min*2;
        y=b-min*2;
        x=c/2;
        min=x<y?x:y;
        count+=min+min*2;
        x=b;
        y=c/2;
        min=x<y?x:y;
        count1=min+min*2;
        x=(b-min)/2;
        y=a;
        min=x<y?x:y;
        count1+=min+min*2;
        if(count>count1)
        {
            answers[i]=count;
        }
        else
        {
            answers[i]=count1;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}

