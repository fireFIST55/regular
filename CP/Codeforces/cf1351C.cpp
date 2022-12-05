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
        string s;
        cin>>s;
        int a,b,x=0,y=0,total=0;
        set<pair<int,int>>pa;
        for(int i=0;s[i];i++){
            a=x;
            b=y;
            if(s[i]=='N')
                y+=1;
            else if(s[i]=='S')
                y-=1;
            else if(s[i]=='E')
                x+=1;
            else
                x-=1;
            if(!pa.count({a+x,b+y})){
                total+=5;
                pa.insert({a+x,b+y});
            }
            else
                total+=1;
        }
        cout<<total<<"\n";
    }
    return 0;
}