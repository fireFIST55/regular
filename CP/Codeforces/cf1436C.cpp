#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main(void){
    encoding_898;
    ll n,x,pos,mid,right=0,left=0,small=0,large=0,larger_option=0,smaller_option=0;
    cin>>n>>x>>pos;
    ll a=1;
    right=n;
    while(left<right){
        mid=(left+right)/2;
        if(mid<=pos){
            if(mid!=pos)
                small+=1;
            left=mid+1;
        }
        else{
            large+=1;
            right=mid;
        }
    }
    larger_option=n-x;
    smaller_option=x-1;
    for(int i=1;i<=n-(small+large+1);i++)
        a=((a%mod)*(i%mod))%mod;
    for(int i=0;i<large;i++)
        a=((a%mod)*(larger_option-i)%mod)%mod;
    for(int i=0;i<small;i++)
        a=((a%mod)*(smaller_option-i)%mod)%mod;
    cout<<a<<"\n";
    return 0;
}