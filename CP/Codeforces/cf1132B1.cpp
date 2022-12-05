#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,m;
    cin>>n;
    unsigned long long int sum=0,array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        sum+=array[i];
    }
    sort(array,array+n,greater<int>());
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        cin>>x;
        cout<<sum-array[x-1]<<endl;
    }
    return 0;
}
