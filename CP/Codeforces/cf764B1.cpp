#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k=1;
    cin>>n;
    long int temp,array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        if(i&&array[i-1]!=array[i])
            k=0;
    }
    if(k)
    {
        for(i=0;i<n;i++)
            cout<<array[i]<<" ";
    }
    else
    {
        for(i=0;i<=n-i-1;i+=2)
        {
            temp=array[i];
            array[i]=array[n-i-1];
            array[n-i-1]=temp;
        }
        for(i=0;i<n;i++)
            cout<<array[i]<<" ";
        cout<<endl;
    }
    return 0;
}
