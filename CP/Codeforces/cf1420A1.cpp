#include<bits/stdc++.h>
#define encoding_iham898             \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
using namespace std;
int main(void)
{
    encoding_iham898;
    int i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a,b=0,flag=0;
        while(n--)
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
