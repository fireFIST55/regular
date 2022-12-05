#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    ll n,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=n;
        int count=0,k=1;
        ll i=0;
        vector<ll>vec;
        while(!(x%2)){
            x/=2;
            i=2;
            k=2;
            count++;
            vec.push_back(i);
        }
        for(i=3;i<=sqrt(x);i+=2){
            if(!(x%i)&&!(i%k)){
                while(!(x%i)){
                    x/=i;
                    count++;
                    k=2;
                    vec.push_back(i);
                }
            }
            else if(!(x%i))
                break;
        }
        if(x>2)
            vec.push_back(x);
        if(vec.size()>=2){
            for(i=vec.size()-2;i>=0;i--){
                if(vec[i+1]%vec[i]){
                    vec[i]*=vec[i+1];
                    k=i;
                }
            }
        }
        for(i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
