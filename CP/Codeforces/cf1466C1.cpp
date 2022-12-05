#define encoding_898    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int count=0,length=str.length();
        for(int i=0;i<length;i++){
            char a,b,c;
            a=str[i];
            if(i+1>length||str[i+1]=='+')
                b='-';
            else
                b=str[i+1];
            if(i+2>length)
                c='?';
            else
                c=str[i+2];
            if(a==b&&b==c){
                count+=2;
                i+=2;
            }
            else if(a==b&a!=c){
                count+=1;
                i+=1;
            }
            else if(a!=b&&a==c){
                count+=1;
                if(i+2<length)
                    str[i+2]='+';
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}