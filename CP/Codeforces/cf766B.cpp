#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,n,yes=0;
    cin>>n;
    long long int array[n],a,b,c;
    for(i=0;i<n;i++)
        cin>>array[i];
    sort(array,array+n);
    for(i=2;i<n;i++){
        a=array[i];
        b=array[i-1];
        c=array[i-2];
        if(a+b>c&&c+a>b&&b+c>a){
            yes=1;
            break;
        }
    }
    if(yes)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
