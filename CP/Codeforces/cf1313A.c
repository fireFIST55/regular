#include<stdio.h>
int main(void)
{
    int i,t,a,b,c,count;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        count=0;
        if(a>=4&&b>=4&&c>=4)
            printf("%d\n",7);
        else if(a>=3&&b>=3&&c>=3)
            printf("%d\n",6);
        else if(a>=1||b>=1||c>=1)
        {
            if(a>=1)
            {
                count+=1;
                a-=1;
            }
            if(b>=1)
            {
                count+=1;
                b-=1;
            }
            if(c>=1)
            {
                count+=1;
                c-=1;
            }
            if((a>=2||b>=2||c>=2)&&(a>=1&&b>=1&&c>=1))
                count+=2;
            else if((a>=1&&b>=1)||(b>=1&&c>=1)||(c>=1&&a>=1))
                count+=1;
            printf("%d\n",count);
        }
        else
            printf("%d\n",0);
    }
    return 0;
}
