#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n;
    long long int a,x=2,y,total=0;
    cin>>n;
    while(x--)
    {
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(i)
                y|=a;
            else
                y=a;
        }
        total+=y;
    }
    cout<<total<<"\n";
    return 0;
}
