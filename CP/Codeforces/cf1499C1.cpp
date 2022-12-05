#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int n;
    cin>>n;
    ll a,x=0,min1=0,min2=0,cost=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        x+=a;
        if(i>1&&(i&1)){
            min1=min(min1,a);
            ll cnt=(ll)i,sum;
            sum=x+(n-cnt/2-1)*min1+(n-cnt/2)*min2;
            cost=cost?min(cost,sum):sum;
        }
        else if(i>1){
            i==2?min2=a:min2=min(min2,a);
            ll cnt=(ll)i,sum;
            sum=x+(n-cnt/2)*min1+(n-cnt/2)*min2;
            cost=cost?min(cost,sum):sum;
        }
        else    min1=a;
    }
    cout<<cost<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}