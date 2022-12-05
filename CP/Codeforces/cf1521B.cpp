#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int i=0,n,ab,axis=1e9+1;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
            if(axis>it){
                ab=i;
                axis=it;
            }
            i+=1;
        }
        int moves=ab?n:n-1;
        cout<<moves<<endl;
        if(ab){
            cout<<1<<" "<<ab+1<<" "<<axis<<" "<<arr[0]<<endl;
            swap(arr[ab],arr[0]);
        }
        for(i=1;i<n;i++){
            arr[i]=arr[i-1]+1;
            cout<<1<<" "<<i+1<<" "<<axis<<" "<<arr[i]<<endl;
        }
    }
    return 0;
}