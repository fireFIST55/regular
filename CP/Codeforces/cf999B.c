#include<stdio.h>
#include<math.h>
int partition(int array[],int low,int high)
{
    int i,j,temp;
    for(i=low-1,j=low;j<high;j++)
    {
        if(array[high]>array[j])
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
void quick_sort(int array[],int low,int high)
{
    int pivot;
    if(high<=low)
        return;
    pivot=partition(array,low,high);
    quick_sort(array,low,pivot-1);
    quick_sort(array,pivot+1,high);
}
int main(void)
{
    int i,j,k,x,y,n,m=0;
    scanf("%d",&n);
    int divisors[n-1],freq[100]={0};
    char string[n+2],answer[n+2];
    scanf("%s",string);
    for(i=2;i<=sqrt(n);i++)
    {
        if(!(n%i))
        {
            freq[i-1]++;
            for(j=0,k=i-1;j<i&&k>=0;j++,k--)
                answer[j]=string[k];
            for(j=0;j<i;j++)
                string[j]=answer[j];
            if(!freq[n/i-1])
            {
                divisors[m]=n/i;
                m++;
            }
        }
    }
    if(m>0)
    {
        quick_sort(divisors,0,m-1);
        for(i=0;i<m;i++)
        {
            for(j=0,k=divisors[i]-1;j<divisors[i]&&k>=0;j++,k--)
                answer[j]=string[k];
            for(j=0;j<divisors[i];j++)
                string[j]=answer[j];
        }
    }
    for(j=n-1;j>=0;j--)
        printf("%c",string[j]);
    return 0;
}
