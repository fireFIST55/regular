#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search(double array[],int n,double x)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(array[mid]==x)
            return mid;
        else if(array[mid]<x)
            left=mid+1;
        else
            right=mid-1;
    }
}
int partition(double array[],int high,int low,char sub[][35])
{
    int i,j;
    double temp;
    char dummy[35];
    for(i=low,j=low-1;i<high;i++)
    {
        if(array[high]>array[i])
        {
            j++;
            temp=array[j];
            strcpy(dummy,sub[j]);
            array[j]=array[i];
            strcpy(sub[j],sub[i]);
            array[i]=temp;
            strcpy(sub[i],dummy);
        }
    }
    temp=array[j+1];
    strcpy(dummy,sub[j+1]);
    array[j+1]=array[high];
    strcpy(sub[j+1],sub[high]);
    array[high]=temp;
    strcpy(sub[high],dummy);
    return j+1;
}
void sort(double array[],int high,int low,char sub[][35])
{
    int pivot;
    if(high<=low)
        return;
    pivot=partition(array,high,low,sub);
    sort(array,pivot-1,low,sub);
    sort(array,high,pivot+1,sub);
}
int main(void)
{
    int i,j,k,n,m,x,y,p,index;
    scanf("%d %d",&n,&m);
    char temp[4],string[n+m][35],sub[n][35];
    double z,z1,memory[n];
    for(i=0;i<n+m;i++)
    {
        scanf(" %[^\n]",string[i]);
        if(i<n)
            strcpy(sub[i],string[i]);
        for(j=0,x=0,z=0,p=0;string[i][j]!='\0';j++)
        {
            if(string[i][j]==' ')
                x=j;
            else if(x)
            {
                k=0;
                while(string[i][j]!='.'&&string[i][j]!='\0')
                {
                    temp[k]=string[i][j];
                    k++;
                    j++;
                }
                temp[k]='\0';
                z1=atoi(temp)+p;
                p+=k;
                z1/=(z1+1);
                z+=z1;
            }
            if(string[i][j]=='\0')
                break;
        }
        z/=(z+1);
        if(i<n)
        {
            memory[i]=z;
            sub[i][x]='\0';
        }
        else
        {
            if(i==n)
                sort(memory,n-1,0,sub);
            index=search(memory,n,z);
            printf("%s %c%s\n",string[i],'#',sub[index]);
        }
    }
    return 0;
}
