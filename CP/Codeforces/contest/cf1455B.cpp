#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int x,n=1,y;
        cin>>x;
        while(((n*(n+1))/2)<x)
            n++;
        if(x==1)
            cout<<x<<"\n";
        else if(((n*(n+1))/2)==x)
            cout<<n<<"\n";
        else{
            y=n*(n+1)/2;
            if(y-1==x)
                cout<<n+1<<"\n";
            else
                cout<<n<<"\n";
        }
    }
    return 0;
}