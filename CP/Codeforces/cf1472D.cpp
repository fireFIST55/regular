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
        ull a,alice=0,bob=0;
        vector<ull>odd,even;
        while(n--){
            cin>>a;
            if(a&1)
                odd.push_back(a);
            else
                even.push_back(a);
        }
        sort(even.begin(),even.end(),greater<ull>());
        sort(odd.begin(),odd.end(),greater<ull>());
        if(!(odd.size()))
            odd.push_back(0);
        if(!(even.size()))
            even.push_back(0);
        for(int i=0,j=0,k=0;k<odd.size()+even.size();k++){
            if(k&1){
                if(odd[i]<even[j])
                    j+=1;
                else{
                    bob+=odd[i];
                    i+=1;
                }
            }
            else{
                if(even[j]<odd[i])
                    i+=1;
                else{
                    alice+=even[j];
                    j+=1;
                }
            }
            if(i==odd.size()){
                i-=1;
                odd[i]=0;
            }
            if(j==even.size()){
                j-=1;
                even[j]=0;
            }
        }
        if(bob>alice)
            cout<<"Bob\n";
        else if(alice>bob)
            cout<<"Alice\n";
        else
            cout<<"Tie\n";
    }
    return 0;
}