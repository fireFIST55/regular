#include<stdio.h>
long int sort(long int array[],int x,int y);
int main(void)
{
    int i,j,k,n,odd=0,even=0;
    scanf("%d",&n);
    long int result,array[n],odds[n],evens[n],max=-1,max1=-1;
    for(i=0,j=0,k=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(!(array[i]&1))
        {
            even++;
            max=max<array[i]?array[i]:max;
            evens[j]=array[i];
            j++;
        }
        else
        {
            odd++;
            max1=max1<array[i]?array[i]:max1;
            odds[k]=array[i];
            k++;
        }
    }
    if(odd==even+1||even==odd+1||even==odd)
        printf("%d\n",0);
    else
    {
        if(odd>even)
            result=sort(odds,odd-even-1,odd);
        else
            result=sort(evens,even-odd-1,even);
        printf("%ld\n",result);
    }
    return 0;
}
long int sort(long int array[],int x,int y)
{
    int i,j,k=0,pos;
    long int result=0;
    for(i=0;i<y;i++)
    {
        pos=i;
        for(j=i+1;j<y;j++)
        {
            pos=array[j]>array[pos]?pos:j;
        }
        result+=array[pos];
        k=array[pos];
        array[pos]=array[i];
        array[i]=k;
        if(i==x-1)
            return result;
    }
}
