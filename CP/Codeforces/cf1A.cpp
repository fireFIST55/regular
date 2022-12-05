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
    long long int total,n,m,a;
    cin>>n>>m>>a;
    if(n%a)
        total=(n/a)+1;
    else
        total=(n/a);
    if(m%a)
        total*=((m/a)+1);
    else
        total*=(m/a);
    cout<<total<<"\n";
    return 0;
}

