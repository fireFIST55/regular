#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,m,k,t,each,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        each=n/k;
        if(each>=m)
            cout<<m<<"\n";
        else{
            x=each;
            m-=each;
            if(m%(k-1))
                m=(m/(k-1))+1;
            else
                m/=(k-1);
            cout<<x-m<<"\n";
        }
    }
    return 0;
}
