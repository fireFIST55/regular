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
        int n,m;
        cin>>n>>m;
        ll X[n][m],count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>X[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll a[3];
                a[0]=X[i][j],a[1]=X[i][m-j-1],a[2]=X[n-i-1][j];
                sort(a,a+3);
                count+=(a[1]-a[0])+(a[2]-a[1]);
                X[i][j]=X[i][m-j-1]=X[n-i-1][j]=a[1];
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}