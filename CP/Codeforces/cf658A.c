#include<stdio.h>
int main(void)
{
    int duration=0,i,x,n,c,radewoosh=0,limak=0;
    scanf("%d %d",&n,&c);
    int scores[n],time[n];
    for(i=0;i<n;i++)
        scanf("%d",&scores[i]);
    for(i=0;i<n;i++)
        scanf("%d",&time[i]);
    for(i=0;i<n;i++)
    {
        duration+=time[i];
        x=scores[i]-c*duration;
        if(x>0)
            limak+=x;
    }
    for(i=n-1,duration=0;i>=0;i--)
    {
        duration+=time[i];
        x=scores[i]-c*duration;
        if(x>0)
            radewoosh+=x;
    }
    if(limak>radewoosh)\
        printf("Limak\n");
    else if(radewoosh>limak)
        printf("Radewoosh\n");
    else
        printf("Tie\n");
    return 0;
}
