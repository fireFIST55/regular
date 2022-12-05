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
        int n,k,x=0,y=0;
        cin>>n>>k;
        map<int,int>rec;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i>1){
                if(vec[i-1]>vec[i]&&vec[i-1]>vec[i-2]){
                    rec[i-1]+=1;
                    rec[i+k-3]=-1;
                }
                if(x<rec[i-1]){
                    x=rec[i-1];
                    y=i-1;
                }
                rec[i]=(rec[i]==-1)?rec[i-1]?(rec[i-1]-1):0:rec[i-1];
            }
        }
        y=(((y-k+2))+1<1)?1:(((y-k+2))+1);
        cout<<x+1<<" "<<y<<"\n";
    }
    return 0;
}