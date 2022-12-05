#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,g=0,s=0,b=0,right;
    cin>>n;
    bool yes=0;
    vector<int>vc(n);
    for(int &X: vc) cin>>X;

    right=n/2-1;
    while(vc[right]==vc[right+1])   right-=1;

    if(right>=4){
        int left=0;
        for(;left<=right;left++){
            if((left-1>=0&&vc[left]==vc[left-1])||g<1) g+=1;
            else break;
        }

        for(;left<=right;left++){
            if((left-1>=0&&vc[left]==vc[left-1])||s<=g) s+=1;
            else break;
        }

        b=right+1-s-g;

        if(s&&b&&g&&g<s&&g<b)    yes=1;
    }
    yes?cout<<g<<' '<<s<<' '<<b:cout<<0<<' '<<0<<' '<<0;
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}