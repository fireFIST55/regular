#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    long long int n,m,total=0;
    cin>>n>>m;
    if(!(m%n)){
        n=(m/n);
        while(n){
            if(!(n%3))
                n/=3;
            else if(!(n%2))
                n/=2;
            else
                break;
            total++;
        }
        if(n==1)
            cout<<total;
        else
            cout<<-1;
    }
    else
        cout<<-1;
    return 0;
}
