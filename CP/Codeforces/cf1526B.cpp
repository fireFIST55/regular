#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n;
        bool yes=0;
        cin>>n;
        while(n>0&&!yes){
            if(!(n%11)||!(n%111))
                yes=1;
            n-=111;
        }
        yes?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}