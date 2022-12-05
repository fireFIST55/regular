#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,i;
    cin>>t;
    while(t--){
        int n,m,pos=0,neg=0,zero=0;;
        cin>>n>>m;
        int a;
        vector<int>pos,neg;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a;
                if(a>0){
                    pos++;
                    pos.push_back(a);
                }
                else if(a<0){
                    neg++;
                    a*=-1;
                    neg.push_back(a);
                }
                else
                    zero++;
            }
            sort(pos.begin(),pos.end());
            sort(neg.begin(),neg.end());
            if(!(pos&1))

        }
    }
}
