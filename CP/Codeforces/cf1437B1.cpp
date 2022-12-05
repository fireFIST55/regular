#define encoding_898    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        string str;
        int n,count=0;
        cin>>n;
        cin>>str;
        for(int i=0;str[i];i++){
            if(str[i]==str[i+1])
                count+=1;
        }
        cout<<ceil(count/2.0)<<"\n";
    }
    return 0;
}