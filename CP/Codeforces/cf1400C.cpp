#include<bits/stdc++.h>
using namespace std;
void solve(){
    string S;
    int X;
    cin>>S>>X;
    int n=S.length();
    string Y(n,'1');
    for(int i=0;i<n;i++){
        if(S[i]=='0'){
            if(i-X>=0)
                Y[i-X]='0';
            if(i+X<n)
                Y[i+X]='0';
        }
    }
    for(int i=0;i<n;i++){
        bool one=false;
        one=one||(i-X>=0&&Y[i-X]=='1');
        one=one||(i+X<n&&Y[i+X]=='1');
        if(S[i]!=one+'0'){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<Y<<endl;
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