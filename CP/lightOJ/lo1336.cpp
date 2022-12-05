#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define m 1e12+2
vector<ll>a(m),b(m);
void kahini(){
    for(ll i=1;i<m;i+=2)
        a[i]=i;
    for(ll i=2;i<m;i++)
        a[i]-=a[i]/2;
    for(ll i=3;i<m;i+=2){
        if(a[i]==i){
            ll x=(((pow(a[i],2)+.000001)-1)/(a[i]-1));
            x&1?1:b[i]=1;
            for(ll j=i*2;j<m;j+=i){
                ll p=((log(a[i])/log(j))+.0000001)+1,x=((pow(j,p)+.000000001)-1)/(j-1);
                a[j]=a[j]/i;
                x&1?1:b[j]=1;
            }
        }
        b[i]+=b[i-1];
    }
}
int main(void){
    encoding_898;
    int t,cs=1;
    kahini();
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<"Case "<<cs++<<": "<<b[n]<<endl;
    }
    return 0;
}