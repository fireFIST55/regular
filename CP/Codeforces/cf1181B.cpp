#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string compareString(string p, string q){
    if(p.length() == q.length()){
        if(p == q)
            return p;
        else{
            for(int i = 0; i<p.length(); i++){
                if(p[i]-48>q[i]-48)
                    return q;
                else if(p[i]-48<q[i]-48)
                    return p;
            }
        }
    }
    else if(p.length()<q.length())  return p;

    return q;
}

string sum(string a, string b){
    int m = a.length(), n = b.length(), carry = 0;
    string s;

    for(int i = m -1, j = n-1; i>=0||j>=0; i--, j--){
        int x = 0 , y = 0;
        if(i>=0) x = a[i]-48;
        if(j>=0) y = b[j]-48;

        x+=y+carry;
        int z = x%10;
        // cout<<"Carry:\t"<<z<<" digit:\t"<<x/10<<endl;
        string  c = to_string(z);
        s+=c;
        carry = x/10;
    }

    if(carry){
        string c = to_string(carry);
        s+= c;
    }
    reverse(s.begin(), s.end());
    return s;
}


void findDigit(string s, int mid, string &X){
    int i = mid, a = 0, b = 0, j;
    while(i>=0&&s[i]=='0')  i-=1, a+=1;

    j = mid;
    while(j<s.length()&&s[j]=='0')    j+=1, b+=1;

    string p, q , c, d;
    if(!i)  c = "0";
    else c = s.substr(0, i);
    // cout<<"Two substrings:\t";
    // cout<<c<<' '<<s.substr(i, s.length()-i)<<endl<<endl;

    p = sum(c, s.substr(i, s.length() - i));

    if(j==s.length())  d = "0";
    else d = s.substr(j, s.length() - j);

    // cout<<"Two substrings:\t";
    // cout<<d<<' '<<s.substr(0, j)<<endl<<endl;

    q = sum(s.substr(0, j), d);

    X = compareString(p, q);
    // cout<<"Two strings for mid:\t"<<mid<<endl<<endl;
    // cout<<p<<' '<<q<<endl;
}

void solve(){
    int l;
    string s, a, b, sm;
    cin>>l>>s;
    int mid = l/2;

    if(!(l&1)){

        if(s[mid]!='0'){
            a = s.substr(0, mid);
            b = s.substr(mid, mid);
            sm = sum(a, b);
        }
        else
            findDigit(s, mid, sm);
    }
    else{
        string sm1, sm2;
        
        findDigit(s, mid, sm1);
        findDigit(s, mid+1, sm2);

        sm = compareString(sm1, sm2);
    }

    cout<<sm<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();
    return 0;
}