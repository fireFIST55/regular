#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,x,k=0,one=0,total=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x)
        {
            k=1;
            if(one<=1)
                total+=one;
            total++;
            if(one)
                one=0;
        }
        else if(k)
            one++;
    }
    cout<<total<<"\n";
    return 0;
}
