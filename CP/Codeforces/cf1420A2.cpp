#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    int i,j,t,a,b,n,flag;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0,b=0,flag=0;j<n;j++)
        {
            cin>>a;
            if(b)
            {
                if(a>=b)
                    flag=1;
            }
            b=a;
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }
    return 0;
}
