#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ull unsigned long long
void solve(){
    string s="codeforces";
    bool found=0;
    ull k,x;
    cin>>k;
    map<int,ull>mp;
    while(!found){
        ull x=1;
        for(int i=0;i<10;i++){
            mp[i]+=1;
            x*=mp[i];
            ull y=x;
            for(int j=i+1;j<10;j++)
                y*=mp[j];
            if(y>=k){
                found=1;
                break;
            }
        }
    }
    for(int i=0;i<10;i++){
        while(mp[i]--)
            cout<<s[i];
    }
}
int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();
    
    return 0;
}