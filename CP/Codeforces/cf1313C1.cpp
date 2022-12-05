#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x:a)   cin>>x;

    for(int i=0;i<n;i++){
        vector<int>b=a;
        int x=0,y=0;
        for(int j=i-1;j>=0;j--){
            if(b[i]<b[j]){
                x+=b[j]-b[i];
                b[j]=b[i];
            }
        }
        vector<int>c=a;
        for(int j=i+1;j<n;j++){
            if(c[i]<c[j]){
                y+=c[j]-c[i];
                c[j]=c[i];
            }
        }
        if(y>x)
            a=b;
        else a=c;
    }

    for(int x:a)    cout<<x<<' ';
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();

    return 0;
}