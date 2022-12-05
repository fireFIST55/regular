#define encoding_898                \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    int i,n,k;
    cin>>n>>k;
    long long int min=0;
    vector<int>a(n);
    for(i=0;i<n;i++)
        cin>>a[i];
    if(k<=n){
        sort(a.begin(),a.begin()+n);
        cout<<a[n-k]<<" "<<a[n-k];
    }
    else
        cout<<-1;
    return 0;
}
