#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int n,ans=0;
ll arr[2000],brr[2001];
void findOut(int i,ll health,int tot){
    if(health<0)
        ans=max(tot-1,ans);
    else if(i==n)   ans=max(tot,ans);
    else{
        findOut(i+1,health+arr[i],tot+1);
        findOut(i+1,health,tot);
    }
}
int main(void){
    encoding_898;
    cin>>n;
    brr[n]=0;
    for(int i=0;i<n;i++)    cin>>arr[i];
    for(int i=n-1;i>=0;i--) brr[i]+=brr[i+1];
    findOut(0,0,0);
    cout<<ans<<endl;
    return 0;
}