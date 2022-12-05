#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>X;
bool sortbyfirst(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)
        return a.second>b.second;
    else
        return a.first>b.first;
}
void check(int n,int north,int south,int east,int west,int i){
    if(n){
        if(!i)
            return check(n-1,north+1,south,east,west,1),check(n-1,north,south+1,east,west,2),check(n-1,north,south,east+1,west,3),check(n-1,north,south,east,west+1,4);
        else if(i<=2)
            return check(n-1,north,south,east+1,west,3),check(n-1,north,south,east,west+1,4);
        else
            return check(n-1,north,south+1,east,west,2),check(n-1,north+1,south,east,west,1);
    }
    else
        X.push_back(make_pair(north-south,east-west));
}
int main(void){
    encoding_898;
    int n,i=0,north=0,south=0,east=0,west=0,count=1;
    cin>>n;
    check(n,north,south,east,west,i);
    sort(X.begin(),X.end(),sortbyfirst);
    for(int i=1;i<X.size();i++){
        if(X[i].first!=X[i-1].first||X[i].second!=X[i-1].second)
            count+=1;
    }
    cout<<count<<"\n";
    return 0;
}