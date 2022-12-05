#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    int i,s,n,flag=0;
    cin>>s>>n;
    int x=n,m,y;
    vector<int>a,freq(10000);
    map<int,int>b;
    while(n--){
        cin>>m>>y;
        if(s>m)
            s+=y;
        else{
            if(freq[m-1])
                b[m]+=y;
            else{
                freq[m-1]++;
                b[m]=y;
                a.push_back(m);
            }
        }
    }
    if(a.size()){
        sort(a.begin(),a.begin()+a.size());
        for(i=0;i<a.size();i++){
            if(s>a[i])
                s+=b[a[i]];
            else{
                flag=1;
                break;
            }
        }
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;

}
