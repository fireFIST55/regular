#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n;
    double total=0;
    cin>>n;
    n+=1;
    while(n--&&n)
        total+=(1/(n/1.0));
    cout<<setprecision(12)<<total;
    return 0;
}
