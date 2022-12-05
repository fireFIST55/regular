#include<stdio.h>
int partition(unsigned long long int array[],int low,int high)
{
    int i,j;
    unsigned long long int temp;
    for(i=low-1,j=low;j<high;j++)
    {
        if(array[j]>array[high])
        {
            i++;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    temp=array[i+1];
    array[i+1]=array[high];
    array[high]=temp;
    return i+1;
}
void quick_sort(unsigned long long int array[],int low,int high)
{
    unsigned long long int pivot;
    if(low>=high)
        return;
    pivot=partition(array,low,high);
    quick_sort(array,low,pivot-1);
    quick_sort(array,pivot+1,high);
}
int main(void)
{
    unsigned long long int sum=0;
    int i,j,m=0,n,k=1,l=1,min;
    scanf("%d",&n);
    unsigned long long int array[n],freq[10000]={0},pos[n];
    for(i=0;i<n;i++)
    {
        scanf("%llu",&array[i]);
        freq[array[i]-1]++;
        if(freq[array[i]-1]==1)
        {
            pos[m]=array[i];
            m++;
        }
        if(i&&array[i-1]>array[i])
            k=0;
        if(i&&array[i-1]<array[i])
            l=0;
    }
    if(!l&&!k)
        quick_sort(pos,0,m-1);
    for(i=0,j=m-1;i<=j;)
    {
        if(i!=j)
        {
            min=freq[pos[i]-1]<freq[pos[j]-1]?freq[pos[i]-1]:freq[pos[j]-1];
            sum+=min*((pos[i]+pos[j])*(pos[i]+pos[j]));
            freq[pos[i]-1]-=min;
            freq[pos[j]-1]-=min;
            if(!freq[pos[i]-1])
                i++;
            else
                j--;
        }
        else if(i==j)
        {
            sum+=(freq[pos[i]-1]/2)*4*(pos[i]*pos[i]);
            break;
        }
    }
    printf("%llu\n",sum);
    return 0;
}
