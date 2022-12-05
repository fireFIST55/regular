#define encoding_898    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ull unsigned long long
#include<bits/stdc++.h>
using namespace std;
ull factor(ull n){
    if(!n)
        return 1;
    ull x=1;
    for(ull i=1;i<=n;i++)
        x*=i;
    return x*x;
}
ull fact(ull n,ull r){
    if(!r)
        return 1;
    else if(r==1)
        return n;
    if(r>n-r)
        r=n-r;
    ull x=1,y=1;
    for(ull i=r;i>=1;i--,n--){
        x*=i;
        y*=n;
    }
    return y/x;
}
int main(void){
    encoding_898;
    ull n;
    cin>>n;
    ull result=(fact(n,n/2)/2)*factor(n/2-1);
    cout<<result<<endl;
    return 0;
}