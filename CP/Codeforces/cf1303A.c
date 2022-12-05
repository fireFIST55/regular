#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,t,temp,count;
    scanf("%d",&t);
    int answers[t];
    char string[101];
    for(i=0;i<t;i++)
    {
        scanf("%s",string);
        for(j=0,count=0;string[j]!='\0';)
        {
            if(string[j]=='1'&&string[j+1]=='0')
            {
                temp=0;
                j+=1;
                do
                {
                    temp++;
                    j++;
                }while(string[j]=='0');
                if(j!=strlen(string))
                {
                    count+=temp;
                }
            }
            else
            {
                j++;
            }
        }
        answers[i]=count;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
