#include<stdio.h>
int main(void)
{
    int i,n,pos,pos1;
    scanf("%d",&n);
    char string[20]="Still Rozdil";
    long int a,min,min1;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        if(!i)
        {
            min=a;
            pos=i;
        }
        else
        {
            if(min>a)
            {
                if(min1>min)
                {
                    pos1=pos;
                    min1=min;
                }
                min=a;
                pos=i;
            }
            else if(min1>a)
            {
                min1=a;
                pos1=i;
            }
        }
    }
    if(n==1||min!=min1)
        printf("%d\n",pos+1);
    else
        printf("%s\n",string);
}
