#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int mnX(int a, int b, int c){
    if(a<=(b + c))
        return 0;
    else{
        int x = a?(a - b - c - 1): 0;
        return x;
    }
}

void solve(){
    bool no = 0;
    int a, b, c, pr, mx, mnpr, mxpr;
    cin>> a>> b>> c>> pr;

    mx = max(max(a, b), c);
    mxpr = (a?a-1:0) + (b?b-1:0) + (c?c-1:0);

    if(a==mx)   mnpr = mnX(a, b, c);
    else if(b == mx) mnpr = mnX(b, a, c);
    else mnpr = mnX(c, a, b);

    if(pr<mnpr || pr>mxpr)  no = 1;

    no?printf("NO\n"): printf("YES\n");
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