#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>vec,int i,int n){
    int ans=1,mx=0;
    map<int,int>x;
    for(int j=0;j<i;j++){
        if(mx<vec[j])
            mx=vec[j];
        if(x[vec[j]]||mx>i){
            ans=0;
            break;
        }
        x[vec[j]]+=1;
    }
    if(ans){
        int my=0;
        map<int,int>y;
        for(int j=i;j<vec.size();j++){
            if(my<vec[j])
                my=vec[j];
            if(y[vec[j]]||my>n){
                ans=0;
                break;
            }
            y[vec[j]]+=1;
        }
    }
    return ans;
}
int check1(vector<int>vec,int i,int n){
    int res=0;
    if(check(vec,i,n))
        res+=1;
    if(i!=n){
        if(check(vec,n,i))
            res+=2;
    }
    return res;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,mx=0;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(mx<vec[i])
                mx=vec[i];
        }
        int a=mx,b=n-mx,re=check1(vec,a,b),x=re?re<3?1:2:0;
        cout<<x<<"\n";
        if(re==1)
            cout<<a<<" "<<b<<"\n";
        else if(re==2)
            cout<<b<<" "<<a<<"\n";
        else if(re==3)
            cout<<a<<" "<<b<<"\n"<<b<<" "<<a<<"\n";
    }
    return 0;
}