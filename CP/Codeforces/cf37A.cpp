#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,a,x=10,max=0,total=0;
    vector<int>freq(10);
    cin>>n;
    while(n--){
        cin>>a;
        if(a>x){
            freq.resize(a);
            x=a;
        }
        if(!freq[a-1])
            total++;
        freq[a-1]++;
        if(max<freq[a-1])
            max=freq[a-1];
    }
    cout<<max<<" "<<total;
    return 0;
}
