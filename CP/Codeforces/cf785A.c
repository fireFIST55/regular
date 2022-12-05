#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,n,count=0;
    scanf("%d",&n);
    char string[n][17];
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
    }
    for(i=0;i<n;i++)
    {
        if(!strcmp(string[i],"Tetrahedron"))
        {
            count+=4;
        }
        else if(!strcmp(string[i],"Cube"))
        {
            count+=6;
        }
        else if(!strcmp(string[i],"Octahedron"))
        {
            count+=8;
        }
        else if(!strcmp(string[i],"Dodecahedron"))
        {
            count+=12;
        }
        else if(!strcmp(string[i],"Icosahedron"))
        {
            count+=20;
        }
    }
    printf("%d",count);
    return 0;
}
