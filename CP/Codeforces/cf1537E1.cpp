#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void fun(string s, string &b, int i, int k){
    // cout<<i<<endl;
    string temp = s.substr(0, i+1);
    int size = i+1;
    while(size<k){
        temp = temp + temp;
        size *=2; 
    }
    if(size>k)  temp = temp.substr(0, k);
    
    b = temp;
}

void solve(){
    int n, k;
    string s, ans;
    cin>>n>>k>>s;
    
    fun(s, ans, n-1, k);

    for(int i = 1; i<n; i++){
        if(s[i]-97>=s[0]-97){
            bool on = 0, gotit=0;
            if(s[i]==s[0]){
                int x = min(i, n-i);
                string a = s.substr(0, x), b = s.substr(i, x);
                if(a.compare(b)<0)  on = 1;
                else if(!a.compare(b)&&i!=n-i){
                    a = s.substr(0, i);
                    b = s.substr(i, n-i);
                    int sz;

                    if(i<n-i){
                        sz = i;
                        while(sz<n-i)
                            a = a + a, sz*=2;

                        if(sz>n-i)  a = a.substr(0, n-i);
                    }
                    else{
                        sz = n-i;
                        while(sz<i)
                            b = b + b, sz*=2;

                        if(sz<i)    b = b.substr(0, i);
                    }

                    if(a.compare(b)<0)  on = 1;
                }

            }
            else on = 1, gotit = 1;
            
            if(on){
                string temp;
                fun(s, temp, i-1, k);
                if(temp.compare(ans)<0)   ans = temp;
            }

            if(gotit)   break;
        }
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();
    return 0;
}