#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int>sz(200000),parent(200000);

int findRepresentative(int v){
    if(v == parent[v])  return v;
    else return parent[v] =  findRepresentative( parent[v] );
}

void makeSet(int a, int b){
    int u = findRepresentative( a ), v = findRepresentative( b );

    if(sz[v] > sz[u])
        swap(u,v);
    sz[u] += 1;
    parent[v] = u;
}

void solve(){
    int n,ans=0;
    cin>>n;
    vector<int>last(26, -1),fr(n);
    
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        parent[i] = i;
        sz[i] = 1;

        for(char S: s){
            if(last[S-'a']!=-1)
                makeSet(i, last[S - 'a']);
            
            last[S - 'a'] = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(!(fr[findRepresentative(i)]))    ans+=1;
        fr[findRepresentative(i)] = 1;
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;
    while(t--)
        solve();

    return 0;
}