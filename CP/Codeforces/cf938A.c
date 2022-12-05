#include<stdio.h>
int main(void)
{
    int i,j,k=0,n;
    scanf("%d",&n);
    char string[n+1],sub[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='y')
        {
            sub[k]=string[i];
            k++;
            for(i+=1;string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='y';i++);
            i-=1;
        }
        else
        {
            sub[k]=string[i];
            k++;
        }
    }
    sub[k]='\0';
    printf("%s",sub);
    return 0;
}
