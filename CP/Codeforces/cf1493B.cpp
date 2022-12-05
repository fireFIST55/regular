#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool check(int a,int b,int c,int d){
    int j,x[]={a,b,c,d},vl[]={0,1,2,5,8};
    for(int i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(x[i]==vl[j])
                break;
        }
        if(j==5)    return false;
    }
    return true;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int h,m,H,M,a,b,c,d;
        string time;
        cin>>h>>m>>time;
        H=(time[0]-48)*10+(time[1]-48),M=(time[3]-48)*10+(time[4]-48);
        map<int,int>trns;
        trns[0]=0;
        trns[1]=1;
        trns[2]=5;
        trns[5]=2;
        trns[8]=8;
        while(1){
            if(M==m)
                M=0,H+=1;
            if(H==h)    H=0;
            a=H<10?0:H/10;
            b=H%10;
            c=M<10?0:M/10;
            d=M%10;
            if(check(a,b,c,d)&&trns[b]*10+trns[a]<m&&trns[d]*10+trns[c]<h){
                cout<<a<<b<<':'<<c<<d<<endl;
                break;
            }
            M+=1;
        }
    }
    return 0;
}