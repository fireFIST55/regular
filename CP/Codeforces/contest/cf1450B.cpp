#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int i,a,b,ans=1,x=1,x1,y1;
        vector<int>arr;
        for(i=0;i<n;i++){
            cin>>a>>b;
            arr.push_back(a+b);
            if(i&&(x1!=a||y1!=b))
                x=0;
            x1=a;
            y1=b;
        }
        sort(arr.begin(),arr.end());
        for(i=1;i<n;i++){
            if(arr[i]-arr[0]>k){
                if(i>1){
                    if(arr[n-1]-arr[i-1]<=k)
                        ans=1;
                    else
                        ans=0;
                    break;
                }
                else{
                    ans=0;
                    break;
                }
            }
        }
        if(x)
            cout<<0<<"\n";
        else if(ans)
            cout<<1<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}