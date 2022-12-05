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
    int n,count=0;
    cin>>n;
    ll a,sum=0;
    set<ll>b;
    b.insert(0);
    while(n--){
        cin>>a;
        sum+=a;
        if(b.count(sum)){
            sum=a;
            count+=1;
            b.clear();
            b.insert(0);
            b.insert(a);
        }
        else
            b.insert(sum);
    }
    cout<<count<<"\n";
    return 0;
}