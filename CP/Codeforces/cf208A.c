#include<stdio.h>
int main(void)
{
    int i,j,k=0,l,m;
    char string[205],answer[205];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='W')
        {
            for(j=i+1;j<i+3&&string[j]!='\0';j++)
            {
                if(string[i+1]!='U'||string[i+2]!='B')
                    break;
            }
            if(j==(i+3))
            {
                i=j-1;
                if(k>0&&answer[k-1]!=' ')
                {
                    answer[k]=' ';
                    k++;
                }
            }
            else
            {
                answer[k]=string[i];
                k++;
            }
        }
        else
        {
            answer[k]=string[i];
            k++;
        }
    }
    answer[k]='\0';
    printf("%s",answer);
    return 0;
}
