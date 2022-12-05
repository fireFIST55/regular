#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cerr.tie(NULL);                  \
    cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,h,m,total,max=0;
    int freq[1440]={0};
    cin>>n;
    while(n--){
        cin>>h>>m;
        total=h*60+m;
        freq[total]++;
        if(max<freq[total])
            max=freq[total];
    }
    cout<<max;
    return 0;
}
