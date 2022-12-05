#include<stdio.h>
int main(void)
{
    int s,v1,v2,t1,t2,first,second;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    first=v1*s+t1*2;
    second=v2*s+t2*2;
    if(first<second)
    {
        printf("First\n");
    }
    else if(second<first)
    {
        printf("Second\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;
}
