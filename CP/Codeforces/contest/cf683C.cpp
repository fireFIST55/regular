#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,one,n,w,ans,count;
    cin>>t;
    while(t--){
        unsigned long long int x,sum=0,w;
        cin>>n>>w;
        vector<int>index;
        for(i=0,one=0,count=0;i<n;i++){
            cin>>x;
            if(x<w&&sum+x<w){
                sum+=x;
                index.push_back(i+1);
                count++;
            }
            else if(x==w||x*2>=w&&x<=w){
                one=1;
                ans=i+1;
            }
        }
        if(one){
            cout<<one<<"\n";
            cout<<ans<<"\n";
        }
        else if(sum*2>=w&&sum<=w){
            cout<<count<<"\n";
            for(i=0;i<index.size();i++)
                cout<<index[i]<<" ";
            cout<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
    return 0;
}
