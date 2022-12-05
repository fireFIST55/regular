#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,x;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int l=0,r=n,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==x){
            f=1;
            break;
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(f==1)
        cout << "Found at index " << mid << endl;
    else
        cout << "Not Found" << endl;
}