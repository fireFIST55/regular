#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,int>>X;
        vector<ll>Y(n);
        for(int i=0;i<n;i++){
            cin>>Y[i];
            X.push_back(make_pair(Y[i],i));
        }
        sort(X.begin(),X.end());
        for(int i=0;i<n;i++)
            cout<<X[i].first<<" "<<X[i].second<<endl;
        cout<<endl;
    }
    return 0;
}