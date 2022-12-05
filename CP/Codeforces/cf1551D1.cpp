#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    bool no = 1;
    int row, col, hor, tot;
    cin>>row>>col>>hor;
    tot = (row*col)/2;

    if(!(row&1)&&!(col&1)) (!(hor&1)&&hor<=tot)?no = 0: no = 1;
    else if(row&1){
        int x = col/2;
        if(x<=hor&&x*row>=hor){
            hor -= x;
            if(!(hor&1)) no = 0;
        }
    }
    else{
        int x = (col-1)/2;
        if(x*row>=hor&&!(hor&1))
            no = 0;
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