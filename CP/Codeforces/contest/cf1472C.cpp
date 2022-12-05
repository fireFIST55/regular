#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ull>vec(n);
        ull a;
        for(int i=0;i<n;i++){
            cin>>a;
            vec[i]+=a;
            if(i+a<n){
                if(vec[i+a]){
                    if(vec[i+a]<vec[i]){
                        vec[i+a]=0;
                        vec[i+a]=vec[i];
                    }
                }
                else
                    vec[i+a]+=vec[i];
            }
        }
        sort(vec.begin(),vec.end());
        cout<<vec[vec.size()-1]<<"\n";
    }
    return 0;
}