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
        int n,x,k=0,l=0;
        cin>>n;
        if(n&1)
            x=n/2+1;
        else
            x=n/2;
        ll a;
        vector<ll>vec,vec1;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i<x)
                vec.push_back(a);
            else
                vec1.push_back(a);
        }
        reverse(vec1.begin(),vec1.end());
        for(int i=0;i<n;i++){
            if(i&1){
                cout<<vec1[k]<<" ";
                k++;
            }
            else{
                cout<<vec[l]<<" ";
                l++;
            }
        }
        cout<<"\n";
    }
    return 0;
}