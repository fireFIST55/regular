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
    int i,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ull>a(n);
        ull xy,total=0,total1=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),greater<ull>());
        for(i=1;i<a.size();i++){
            total+=(a[0]-a[i]);
            total1+=(a[1]-a[0]);
        }
        if(total==total1)
            cout<<total<<"\n";
        else{
            xy=total*total1/(__gcd(total,total1));
            cout<<xy<<"\n";
        }
    }
}
