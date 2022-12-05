#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        ll w,h,n,x=1,y=1;
        cin>>w>>h>>n;
        while(!(w%2)){
            x*=2;
            w/=2;
        }
        while(!(h%2)){
            y*=2;
            h/=2;
        }
        x*=y;
        if(x>=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}