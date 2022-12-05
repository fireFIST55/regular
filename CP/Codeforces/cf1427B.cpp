#define encoding_898    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,k,points=0,lose,x=1,sub=0,sub1=0;
        cin>>n>>k;
        string record;
        cin>>record;
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(record[i]=='W'){
                x=0;
                i+=1;
                points+=1;
                while(i<n&&record[i]=='W'){
                    points+=2;
                    i++;
                }
                if(i<n){
                    lose=0;
                    while(i<n&&record[i]=='L'){
                        i++;
                        lose++;
                    }
                    vec.push_back(lose);
                    i-=1;
                }
            }
            else if(x)
                sub+=1;
        }
        if(record[n-1]=='L'&&vec.size()){
            sub1=vec[vec.size()-1];
            vec.erase(vec.begin()+vec.size()-1);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size()&&k;i++){
            if(k>=vec[i]){
                k-=vec[i];
                points+=1+(vec[i]*2);
                vec[i]=0;
            }
            else{
                points+=(k*2);
                k=0;
            }
        }
        if(k&&sub){
            int y=min(k,sub);
            if(x)
                points=1+(y-1)*2;
            else
                points+=y*2;
            k-=y;
        }
        if(k&&sub1){
            int y=min(k,sub1);
            points+=y*2;
        }
        cout<<points<<"\n";
    }
    return 0;
}