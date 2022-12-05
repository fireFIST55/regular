#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>vec;
        if(x>45)
            cout<<-1<<"\n";
        else if(x<10)
            cout<<x<<"\n";
        else{
            for(int i=9;i;i--){
                if(i<=x){
                    x-=i;
                    vec.push_back(i);
                }
                else{
                    vec.push_back(x);
                    x=0;
                }
                if(!x)
                    break;
            }
            if(!x){
                reverse(vec.begin(),vec.end());
                for(int i=0;i<vec.size();i++)
                    cout<<vec[i];
                cout<<"\n";
            }
            else
                cout<<-1<<"\n";
        }
    }
    return 0;
}