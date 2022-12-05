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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ull total_del=0,total_res=0;
        vector<ull>res(n),del(n);
        for(int i=0;i<n;i++)
            cin>>del[i];
        for(int i=0;i<n;i++){
            cin>>res[i];
            if(res[i]>=del[i]||total_res+res[i]>=del[i]){
                if(total_del<del[i]){
                    total_del=del[i];
                    for(int j=i-1;j>0;j--){
                        if((del[j])&&(del[j]<=del[i])){
                            total_res-=res[j];
                            del[j]=0;
                        }
                    }
                }
                if(total_del>total_res)
                del[i]=0;
            }
            else
                total_res+=res[i];
        }
        ull ans=max(total_del,total_res);
        cout<<ans<<"\n";
    }
    return 0;
}