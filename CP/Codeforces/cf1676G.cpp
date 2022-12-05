#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>>tree;
vector<bool>color;
int result;
int backtrack(int n){
    int total=1+(-2*color[n]);
    for(int&v:tree[n])total+= backtrack(v);
    if(total==0)result++;
    return total;
}
 
void solve(){
    int n,temp;cin>>n;
    tree=vector<vector<int>>(n+1);
    color=vector<bool>(n+1);
    for(int i=0;i<n-1;i++){
        cin>>temp;
        tree[temp].push_back(i+2);
    }
    string s;cin>>s;
    for(int i=1;i<=s.size();i++){
        if(s[i-1]=='W')color[i]=true;
    }
    result=0;
    backtrack(1);
    cout<<result<<endl;
    return;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}