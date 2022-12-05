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
        int n,m;
        cin>>n>>m;
        ull total=0;
        vector<int>a(n);
        vector<ull>b(m),x(m);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<m;i++){
            cin>>b[i];
            x[i]=b[i];
        }
        sort(b.begin(),b.begin()+a[0]);
        for(int i=0,j=0;i<n;i++){
            if(x[a[i]-1]>=b[j]){
                total+=b[j];
                j+=1;
            }
            else
                total+=x[a[i]-1];
        }
        cout<<total<<"\n";
    }
    return 0;
}