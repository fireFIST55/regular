#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void div(int a, vector<int>&d){
    for(int i = 2; i*i<=a; i+=2){
        if(!(a%i)){

            while(!(a%i)){
                a/=i;
                d.push_back(i);
            }
        }

        if(i==2)    i-=1;
    }

    if(a>1) d.push_back(a);
}

void solve(){
    bool no = 1;
    int a, b, k;
    cin>>a >>b >>k;

    vector<int>aDiv, bDiv;

    div(a, aDiv);
    div(b, bDiv);

    int options = aDiv.size() + bDiv.size();
    if(options>=k){
        if(a==b){
            if(a!=1&&k>1)   no = 0;
        }
        else{
            if((k==1&&(!(a%b)||!(b%a)))||(k>1)) no = 0;
        }
    }
    no?cout<<"NO\n":cout<<"YES\n";
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