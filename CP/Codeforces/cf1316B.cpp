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
        int n,k=1;
        cin>>n;
        string s;
        cin>>s;
        char a;
        for(int i=0;i<n;i++){
            if(!i)
                a=s[i];
            else if(a>s[i]){
                a=s[i];
                k=i+1;
            }
            else if(a==s[i]){
                string c(s.begin()+i,s.end());
                string f(s.begin(),s.begin()+i);
                int x=(n-i);
                if(x&1)
                    reverse(f.begin(),f.end());
                c.append(f);
                if(k>1){
                    string d(s.begin()+k-1,s.end());
                    string e(s.begin(),s.begin()+k-1);
                    int y=(n-k)+1;
                    if(y&1)
                        reverse(e.begin(),e.end());
                    d.append(e);
                    k=c.compare(d)<0?i+1:k;
                }
                if(k==1){
                    string d(s.begin(),s.end());
                    k=c.compare(d)<0?i+1:k;
                }
            }
        }
        if(k==1)
            cout<<s<<"\n";
        else{
            string d(s.begin()+k-1,s.end());
            string e(s.begin(),s.begin()+k-1);
            int y=(n-k)+1;
            if(y&1)
                reverse(e.begin(),e.end());
            d.append(e);
            cout<<d<<"\n";
        }
        cout<<k<<"\n";
    }
    return 0;
}