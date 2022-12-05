#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,m,k,a,one=0,two=0,total=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            one++;
        else
            two++;
    }
    if(one>m)
        total=one-m;
    else
        k+=(m-one);
    if(two<=k)
        cout<<total;
    else
        cout<<total+(two-k);
    cout<<"\n";
    return 0;
}
