#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
        
    int x[n+1],y[n+1];
    
    set<int> r,c;
    
    int quer[q][5];
    
    for(int i=0;i<q;i++) {
        int t;
        cin>>t;
        
        if(t==1 || t==2){
            quer[i][0]=t;
            cin>>quer[i][1]>>quer[i][2];
        }
        
        else {
            quer[i][0]=t;
            cin>>quer[i][1]>>quer[i][2]>>quer[i][3]>>quer[i][4];
        }
    }
    
    
    for(int i=1;i<=n;i++) {
        x[i]=0;
        y[i]=0;
        r.insert(i);
    }
    
        for(int i=1;i<=n;i++) {
        c.insert(i);
    }
    
    
    for(int i=0;i<q;i++) {
        
        int t=quer[i][0];
        
        if(t==1 ) {
            int a,b;
            a=quer[i][1];
            b=quer[i][2];
            
            
            x[a]++;
            y[b]++;
            
            auto it = r.find(a);
            
            if(it!=r.end())
                r.erase(it);
            
            it = c.find(b);
            
            if(it!=c.end())
                c.erase(it);
            
        }
        
        
        else if(t==2) {
            int a,b;
            
            a=quer[i][1];
            b=quer[i][2];
            
            x[a]--;
            y[b]--;
            
            if(x[a]==0){
                r.insert(a);
            }
            
            if(y[b]==0) {
                c.insert(b);
            }
        }
        
        else if(t==3) {
            int x1,x2,y1,y2;
            
            x1=quer[i][1];
            y1=quer[i][2];
            x2=quer[i][3];
            y2=quer[i][4];
            
           
           
           auto lower = r.lower_bound(x1);
           
           auto lower1 = c.lower_bound(y1);
           
           if(lower != r.end() && *lower <= x2 && lower1 !=c.end() && *lower1 <= y2) {
               cout<<"No"<<endl;
           }
           
           else{
               cout<<"Yes"<<endl;
           }
           
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}