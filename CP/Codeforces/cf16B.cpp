#include<bits/stdc++.h>
using namespace std;
long int partition(long int array[][2],long int high,long int low)
{
    long int i,j,temp,temp1;
    for(i=low-1,j=low;j<high;j++)
    {
        if(array[j][1]>array[high][1])
        {
            i++;
            temp=array[i][0];
            temp1=array[i][1];
            array[i][0]=array[j][0];
            array[i][1]=array[j][1];
            array[j][0]=temp;
            array[j][1]=temp1;
        }
    }
    temp=array[i+1][0];
    temp1=array[i+1][1];
    array[i+1][0]=array[high][0];
    array[i+1][1]=array[high][1];
    array[high][0]=temp;
    array[high][1]=temp1;
    return i+1;
}
void quick_sort(long int array[][2],int high,int low)
{
    long int pivot;
    if(low>=high)
        return;
    pivot=partition(array,high,low);
    quick_sort(array,pivot-1,low);
    quick_sort(array,high,pivot+1);
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int i,n,k,m,total=0;
    cin>>n>>m;
    k=n;
    long int match[m][2];
    for(i=0;i<m;i++)
        cin>>match[i][0]>>match[i][1];
    quick_sort(match,m-1,0);
    for(i=0;i<m&&k;i++)
    {
        if(k<=match[i][0])
        {
            total+=k*match[i][1];
            k=0;
        }
        else
        {
            total+=match[i][0]*match[i][1];
            k-=match[i][0];
        }
    }
    cout<<total<<"\n";
    return 0;
}
