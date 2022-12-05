#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int i,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ull total=0,extra,res=0;
        vector<ull>vec(n);
        for(i=0;i<n;i++){
            cin>>vec[i];
            total+=vec[i];
        }
        sort(vec.begin(),vec.end(),greater<ull>());
        int max=vec[1];
        for(i=0;i<n;i++){
            if(vec[i]){
                total-=vec[i];
                if(max*(n-1)-total>=vec[i]){
                    res+=(vec[i]-(max*(n-1)-total));
                    vec[i]+=vec[i]-(max*(n-1)-total);
                }
                else{
                    extra=vec[i]-(max*(n-1)-total);
                    vec[i]+=(extra%(n-1));
                    res+=(extra%(n-1));
                }
                total+=vec[i];
                if(max<vec[i])
                    max=vec[i];
                }
        }
        cout<<res<<"\n";
    }
    return 0;
}
