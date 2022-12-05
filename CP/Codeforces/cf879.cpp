#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,s,d,total=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>d;
        if(!i)
            total+=s;
        else
        {
            if(total>=s)
            {
                if((total+1-s)%d)
                    total=s+((total+1-s)/d+1)*d;
                else
                    total=s+((total+1-s)/d)*d;
            }
            else
                total=s;
        }
    }
    cout<<total<<"\n";
    return 0;
}
