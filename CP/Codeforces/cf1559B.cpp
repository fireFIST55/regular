#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string s, bs = "RB";
    char prev = '*';
    cin>>s;
    
    for(int i = 0; i<n; i++){
        if(s[i]=='?'){
            if(prev=='*'){
                int j = i+1, k, l;
                
                while(j<n&&s[j]=='?')   j+=1;

                if(j<n) prev = s[j];

                j-=1;
                l = j;
                if(j==n-1)  l-=1;

                if(prev=='B'||prev=='*')     k = 0;
                else k = 1;

                while(j>=i&&s[j]=='?'){
                    s[j]=bs[(k++)%2];
                    j-=1;
                }

                l = i;
            }
            else{
                int k;
                if(prev=='B'||prev=='*')     k = 0;
                else k = 1;

                while(i<n&&s[i]=='?'){
                    s[i]=bs[(k++)%2];
                    i+=1;
                }
                i-=1;
            }

        }
        else{
            while(i<n&&s[i]!='?'){
                prev = s[i];
                i+=1;
            }
            i-=1;
        }
        
    }
    cout<<s<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}