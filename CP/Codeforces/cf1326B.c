#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    long int max,a,answer[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        if(!i)
        {
            answer[i]=a;
            max=a;
        }
        else
        {
            if(a>0)
            {
                answer[i]=max+a;
                max+=a;
            }
            else
                answer[i]=max+a;
        }
    }
    for(i=0;i<n;i++)
        printf("%ld ",answer[i]);
    return 0;
}
