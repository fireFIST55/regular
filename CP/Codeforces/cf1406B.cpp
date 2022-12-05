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
        int i=0,j,n,k=2;
        cin>>n;
        j=n-1;
        ll result=1;
        vector<ll>vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        sort(vec.begin(),vec.end(),greater<ll>());
        while(k--){
            if(vec[i]*vec[i+1]>vec[j-1]*vec[j]){
                result*=vec[i]*vec[i+1];
                i+=2;
            }
            else{
                result*=vec[j]*vec[j-1];
                j-=2;
            }
        }
        if(vec[i]<0&&vec[j]<0)
            result*=min(vec[i],vec[j]);
        else
            result*=max(vec[i],vec[j]);
        cout<<result<<"\n";
    }
    return 0;
}