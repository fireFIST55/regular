#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,l,r,a,b,c;
    cin>>n;
    vector<int>ans;
    cout<<'?'<<" "<<1<<" "<<2<<endl;
    cin>>a;
    cout<<'?'<<" "<<1<<" "<<3<<endl;
    cin>>b;
    cout<<'?'<<" "<<2<<" "<<3<<endl;
    cin>>c;
    ans.push_back(b-c);
    ans.push_back(b-b+a-b+c);
    ans.push_back(b-a);
    c=b-a;
    for(int i=4;i<=n;i++){
        cout<<'?'<<" "<<i-1<<" "<<i<<endl;
        cin>>a;
        ans.push_back(a-c);
        c=a-c;
    }
    cout<<'!'<<" ";
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}