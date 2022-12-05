#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,l,r,a,b,dif,change,cost=0;
    cin>>n>>l>>r;
    vector<int>vec;
    int left[200001]={0},right[200001]={0};
    map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>a;
        if(!freq[a])    vec.push_back(a);
        freq[a]=1;
        if(i<l)
            left[a]+=1;
        else
            right[a]+=1;
    }
    for(auto it:vec){
        int x=min(left[it],right[it]);
        left[it]-=x;
        right[it]-=x;
        l-=x;
        r-=x;
    }
    change=abs(l-r)/2;
    if(change){
        for(auto it:vec){
            a=left[it],b=right[it];
            int z=(abs(a-b))/2;
            if(a<b&&l<r){
                z=change<=z?change:z;
                cost+=z;
                change-=z;
                r-=z;
            }
            else if(a>b&&l>r){
                z=change<=z?change:z;
                cost+=z;
                change-=z;
                l-=z;
            }
            if(!change) break;
        }
    }
    cost+=change*2+min(l,r);
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