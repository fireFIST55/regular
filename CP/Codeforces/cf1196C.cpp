#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n, X, Y, upX, upY, dowX, dowY, higX = 1e5, lowX = -1e5, higY = 1e5, lowY = -1e5;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>X>>Y>>dowX>>upY>>upX>>dowY;
        if(!dowX)   lowX = max(lowX, X);
        if(!upX)    higX = min(higX, X);
        if(!dowY)   lowY = max(lowY, Y);
        if(!upY)    higY = min(Y, higY);
    }
    if(lowX<=higX&&lowY<=higY)  cout<<1<<' '<<lowX<<' '<<lowY<<endl;
    else cout<<0<<endl;

    return;
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