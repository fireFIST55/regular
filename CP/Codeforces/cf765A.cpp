#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n;
    cin>>n;
    char string[10];
    for(i=0;i<=n;i++)
        cin>>string;
    if(n&1)
        cout<<"contest";
    else
        cout<<"home";
    cout<<"\n";
    return 0;
}
