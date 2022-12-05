#include<stdio.h>
int piv(int array[],int high,int low)
{
    int i,j,temp;
    for(i=low,j=low-1;i<high;i++)
    {
        if(array[i]>array[high])
        {
            j++;
            temp=array[j];
            array[j]=array[i];
            array[i]=temp;
        }
    }
    temp=array[high];
    array[high]=array[j+1];
    array[j+1]=temp;
    return (j+1);
}
void sort(int array[],int high,int low)
{
    int pivot;
    if(low>=high)
        return;
    pivot=piv(array,high,low);
    sort(array,pivot-1,low);
    sort(array,high,pivot+1);
}
int main(void)
{
    int i,n,last,first,freq[10000]={0};
    scanf("%d",&n);
    unsigned long long int x=0,y=0,total=0,total1=0;
    int array[n];
    if(!(n&1))
        last=n/2-1;
    else
        last=n/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i<=last)
            total+=array[i];
        else
            total1+=array[i];
        freq[array[i]-1]++;
    }
    if(freq[array[i-1]-1]==n)
    {
        x=total;
        y=total1;
    }
    else
    {
        sort(array,n-1,0);
        for(i=0;i<n;i++)
        {
            if(i<=last)
                x+=array[i];
            else
                y+=array[i];
        }
    }
    printf("%llu\n",x*x+y*y);
    return 0;
}

