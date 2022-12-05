#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,yes;
    long long int i,j,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        for(i=1,yes=0;i<=b;i++){
            if(a*i>1000000000)
                break;
            else if(a*i<c){
                yes=1;
                cout<<i;
                break;
            }
            else if(a*i>=c)
                break;
        }
        if(!yes&&(b+1)*a<c*2)
            cout<<b+1;
        else if(!yes )
            cout<<-1;
        cout<<" ";
        yes=0;
        if(c/b<a){
            for(i=b,j=1;c*j<=1000000000;i+=b,j++){
                if(a*i>c*j){
                    yes=1;
                    cout<<i;
                    break;
                }
            }
        }
        if(!yes)
            cout<<-1;
        cout<<"\n";
    }
    return 0;
}
