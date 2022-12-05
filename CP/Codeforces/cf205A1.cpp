#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,pos;
    cin>>n;
    long int a[n],min;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(!i||min>a[i])
        {
            min=a[i];
            pos=i;
        }
    }
    sort(a,a+n);
    if(n==1)
        cout<<n<<endl;
    else if(a[0]!=a[1])
        cout<<pos+1<<endl;
    else
        cout<<"Still Rozdil"<<endl;
    return 0;
}
