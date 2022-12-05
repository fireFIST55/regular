#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k,t,n,temp,count=0,no;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        for(j=0,count=0,no=0;j<n;j++)
        {
            for(k=1;k<n;k++)
            {
                if(a[k]<a[k-1])
                {
                    temp=a[k];
                    a[k]=a[k-1];
                    a[k-1]=temp;
                    count+=1;
                }
                if(count>(n*(n-1))/2-1)
                {
                    no=1;
                    break;
                }
            }
            if(no)
            {
                cout<<"NO"<<"\n";
                break;
            }
        }
        if(!no)
            cout<<"YES"<<"\n";
    }
}
