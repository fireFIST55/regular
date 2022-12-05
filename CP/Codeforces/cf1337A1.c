#include<stdio.h>
int main(void)
{
    int i,t,x,y,z,temp,a,b,c,d;
    scanf("%d",&t);
    int answers[t][3];
    for(i=0;i<t;i++)
    {
        x=a,y=b,z=c;
        if(x+y>z||x+z>y||y+z>x)
        {
            if(x+y<z)
            {
                temp=z-x-y;
                for(temp;temp>=0;)
                {
                    if(x+1<=b&&temp>0)
                    {
                        x++;
                        temp--
                    }
                    if(temp>0&&y+1<=d)
                    {
                        temp--;
                        y++;
                    }
                }
            }
            else if()
        }
    }
}
