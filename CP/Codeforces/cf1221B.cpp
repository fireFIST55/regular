#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,n;
    cin>>n;
    char x[n+1],y[n+1];
    for(i=0;i<n;i++){
        if(i&1){
            x[i]='W';
            y[i]='B';
        }
        else{
            x[i]='B';
            y[i]='W';
        }
    }
    x[i]='\0';
    y[i]='\0';
    for(i=0;i<n;i++){
        if(i&1)
            cout<<x<<"\n";
        else
            cout<<y<<"\n";
    }
    return 0;
}