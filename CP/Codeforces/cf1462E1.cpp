#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
void solve(){
    int n;
    cin>>n;
    ull ans=0,x=0;
    vector<int>arr(n);
    for(auto &it:arr)   cin>>it;
    sort(arr.begin(),arr.end());
    for(int i=0,j=2;i<n;i++){
        if(j-i<2)
            j=i+2;
        if(x)
            x-=1;
        if(j<n&&arr[j]-arr[i]<=2){
            x+=1;
            j+=1;
            while(j<n&&arr[j]<=arr[i]+2){
                j+=1;
                x+=1;
            }
            ans+=(x*(x+1))/2;
        }
        else
            ans+=(x*(x+1))/2;
    }
    cout<<ans<<"\n";    
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}