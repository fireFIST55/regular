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
        int m,n,flag=0,count=0;
        cin>>n;
        vector<int>vec(n),pos(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        for(int i=2,k=1;i<=32;i++){
            if(i==32)
                m=k+1;
            flag=0;
            for(int j=0;j<n;j++){
                if(!pos[j]&&!(vec[j]%i)){
                    flag=1;
                    pos[j]=k;
                }
                else if(!pos[j]&&i==32){
                    pos[j]=m;
                    m+=1;
                    count+=1;
                }
            }
            if(flag){
                k+=1;
                count+=1;
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<n;i++)
            cout<<pos[i]<<" ";
        cout<<"\n";
    }
    return 0;
}