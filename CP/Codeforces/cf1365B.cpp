#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,one=0,zero=0,ans=1;
        cin>>n;
        vector<int>x(n),a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            x[i]=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i])
                one+=1;
            else
                zero+=1;
        }
        if(!one||!zero){
            sort(x.begin(),x.end());
            for(int i=0;i<n;i++){
                if(x[i]!=a[i]){
                    int k=b[i]?0:1;
                    if((k&&!one)||(!k&&!zero)){
                        ans=0;
                        break;
                    }
                }
            }
        }
        if(ans)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}