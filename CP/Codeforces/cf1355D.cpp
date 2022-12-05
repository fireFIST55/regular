#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,s;
    cin>>n>>s;
    if(n==1&&s>1)
        cout<<"YES\n"<<s<<"\n"<<1<<"\n";
    else if(s<=3||n>s/2)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(int i=0;i<n-1;i++)
            cout<<2<<" ";
        cout<<(s-(n-1)*2)<<"\n";
        cout<<1<<"\n";
    }
    return 0;
}