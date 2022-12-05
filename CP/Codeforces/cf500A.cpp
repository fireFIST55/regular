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
    int n,i,t,x,now=1,flag=0,hunt=1;
    cin>>n>>t;
    for(i=1;i<n;i++){
        cin>>x;
        if(hunt){
            if(now==i)
                now=x+i;
            if(now==t)
                flag=1;
            else if(now>t)
                hunt=0;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
