#include<stdio.h>
int main(void)
{
    char table[3];
    char hand[3];
    int count=0,i;
    scanf("%s",table);
    for(i=0;i<5;i++)
    {
        scanf("%s",hand);
        if(hand[0]==table[1]||hand[0]==table[0])
        {
            count++;
        }
        else if(hand[1]==table[1]||hand[1]==table[0])
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
