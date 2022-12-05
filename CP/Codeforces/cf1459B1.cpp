#define encoding_898    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n;
    cin>>n;
    if(!(n&1))
        cout<<(n/2+1)*(n/2+1);
    else
        cout<<2*(n/2+2)*(n/2+1);
    cout<<"\n";
    return 0;
}