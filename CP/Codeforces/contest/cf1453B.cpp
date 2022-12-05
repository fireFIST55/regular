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
    int n,t,cs=1;
    cin>>t;
    while(t--){
        cin>>n;
        ull total=0,total1=0;
        ll carry=0,carry1=0;
        int count=0,count1=0;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>1){
                if(a[0]<a[i]+carry){
                    count+=(a[i]+carry-a[0]);
                    carry+=(a[0]-a[i]-carry);
                }
                else if(a[0]>a[i]+carry){
                    count+=a[0]-a[i]-carry;
                    carry+=(a[0]-a[i]-carry);
                }
                if(a[1]<a[i]+carry1){
                    count1+=(a[i]+carry1-a[1]);
                    carry1+=(a[1]-a[i]-carry1);
                }
                else if(a[1]>a[i]+carry1){
                    count1+=(a[1]-a[i]-carry1);
                    carry1+=(a[1]-a[i]-carry1);
                }
            }
        }
        if(n==2)
            cout<<0<<"\n";
        else{
            cout<<"Carry "<<count<<" "<<"Carry1:"<<count1<<endl;
            ll res=min(count,count1);
            cout<<"ANS "<<res<<"\n";
        }
    }
    return 0;
}