#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n, b, sm = 0;
    double a;
    cin>>n;
    vector<int>vc(n), neg, pos;

    for(int i = 0; i<n; i++){
        cin>>a;
        if(a<0.0){
            b = ceil(a);
            if(b!=floor(a)) neg.push_back(i);
        }
        else{
            b = ceil(a);
            if(b!=floor(a)) pos.push_back(i);
        }
        vc[i] = b;
        sm += b;
    }

    if(sm){
        for(int i: pos){
            sm -=1;
            vc[i] -=1;
            if(!sm) break;
        }
        if(sm){
            for(int i: neg){
                sm -=1;
                vc[i] -=1;
                if(!sm) break;
            }
        }
    }

    for(int X: vc)  cout<<X<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();
        
    return 0;
}