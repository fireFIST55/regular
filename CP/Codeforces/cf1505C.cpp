#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    encoding_898;
    string ab;
    int sum=0,a=ab[0]-'A',b=ab[0]-'A';
    cin>>ab;
    if(ab.length()>2){
        for(int i=2;i<ab.length();i++){
            if(ab[i]-'A'!=(ab[i-1]-'A'+ab[i-2]-'A')%26){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}