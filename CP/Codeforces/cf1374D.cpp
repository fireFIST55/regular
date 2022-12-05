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
        int n;
        ll a,k,x=-1,y,z=-1,l=0;
        cin>>n>>k;
        map<ll,int>freq;
        for(int i=0;i<n;i++){
            cin>>a;
            y=(a%k)?(k-(a%k)):0;
            if(y)
                l=1;
            if(y){
                freq[y]+=1;
                if(x<=freq[y]){
                    z=(x==freq[y])?(z<y)?y:z:y;
                    x=freq[y];
                }
            }
        }
        if(l)
            cout<<((x-1)*k+z+1);
        else
            cout<<0;
        cout<<"\n";
    }
    return 0;
}