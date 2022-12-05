#include<stdio.h>
#include<stdlib.h>
int partition(unsigned long long int array[],int high,int low)
{
    int i,j;
    unsigned long long int temp;
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
    temp=array[j+1];
    array[j+1]=array[high];
    array[high]=temp;
    return j+1;
}
void quick_sort(unsigned long long int array[],int high,int low)
{
    int pivot;
    if(high<=low)
        return;
    pivot=partition(array,high,low);
    quick_sort(array,pivot-1,low);
    quick_sort(array,high,pivot+1);
}
void sort(unsigned long long int array[],int high,int n)
{
    int i,j,pos;
    unsigned long long int temp;
    for(i=0;i<high;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
            pos=array[pos]>array[j]?pos:j;
        temp=array[pos];
        array[pos]=array[i];
        array[i]=temp;
    }
}
int main(void)
{
    int i,j,k,n,m,a,increase=1,decrease=1,max=-1,total=0;
    scanf("%d",&n);
    unsigned long long int sum=0,array[n],sub[n],freq[100000]={0};
    for(i=0;i<n;i++)
    {
        scanf("%llu",&array[i]);
        if(array[i]<=100000)
        {
            if(!freq[array[i]-1])
            {
                sub[k]=array[i];
                k++;
            }
            else
                total-=freq[array[i]-1];
            freq[array[i]-1]++;
            total+=freq[array[i]-1];
        }
        if(i&&array[i-1]>array[i])
            increase=0;
        if(i&&array[i-1]<array[i])
            decrease=0;
        sum+=array[i];
    }
    printf("%d\n",total);
    scanf("%d",&m);
    int x[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
        max=max<x[i]?x[i]:max;
    }
    if(total==n)
    {
        sort(sub,k,k);
        for(i=0;i<m;i++)
        {
            for(j=0;j<k;j++)
            {
                x[i]-=freq[sub[j]];
                if(x[i]<=0)
                    break;
            }
            printf("%llu\n",sum-sub[j]);
        }
        exit(0);
    }
    else if(!increase&&!decrease&&max<=2000)
        sort(array,max,n);
    else if(!increase&&!decrease)
        quick_sort(array,n-1,0);
    for(i=0;i<m;i++)
    {
        if(decrease)
            printf("%llu\n",sum-array[n-x[i]-1]);
        else
            printf("%llu\n",sum-array[x[i]-1]);
    }
    return 0;
}
