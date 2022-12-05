#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main(void){
    encoding_898;
    int n,tot;
    cin>>n;
    ll sum=0,a;
    priority_queue<ll>pq;
    tot=n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        if(a<0)    pq.push(-a);
        if(sum<0){
            tot-=1;
            sum+=pq.top();
            pq.pop();
        }
    }
    cout<<tot<<endl;
    return 0;
}