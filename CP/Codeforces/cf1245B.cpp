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
        int n,a,b,c,x,y,z,ans=0;
        cin>>n>>a>>b>>c;
        int a1=a,b1=b,c1=c;
        int trail=(n+1)/2;
        string moves;
        cin>>moves;
        map<char,int>freq;
        for(int i=0;moves[i];i++)
            freq[moves[i]]++;
        x=freq['R'];
        y=freq['P'];
        z=freq['S'];
        if(a>z)
            a=z;
        if(b>x)
            b=x;
        if(c>y)
            c=y;
        a1-=a;
        b1-=b;
        c1-=c;
        if(a+b>=trail)
            ans=1;
        else if(b+c>=trail)
            ans=2;
        else if(a+c>=trail)
            ans=3;
        else if(a+b+c>=trail)
            ans=4;
        if(ans){
            cout<<"YES"<<"\n";
            for(int i=0;moves[i];i++){
                if(ans==1){
                    if(moves[i]=='S'&&a){
                        cout<<'R';
                        a--;
                    }
                    else if(moves[i]=='R'&&b){
                        cout<<'P';
                        b--;
                    }
                    else{
                        if(a1){
                            cout<<'R';
                            a1--;
                        }
                        else if(b1){
                            cout<<'P';
                            b1--;
                        }
                        else
                            cout<<'S';
                    }
                }
                else if(ans==2){
                    if(moves[i]=='R'&&b){
                        cout<<'P';
                        b--;
                    }
                    else if(moves[i]=='P'&&c){
                        cout<<'S';
                        c--;
                    }
                    else{
                        if(b1){
                            cout<<'P';
                            b1--;
                        }
                        else if(c1){
                            cout<<'S';
                            c1--;
                        }
                        else
                            cout<<'R';
                    }
                }
                else if(ans==3){
                    if(moves[i]=='P'&&c){
                        cout<<'S';
                        c--;
                    }
                    else if(moves[i]=='S'&&a){
                        cout<<'R';
                        a--;
                    }
                    else{
                        if(c1){
                            cout<<'S';
                            c1--;
                        }
                        else if(a1){
                            cout<<'R';
                            a1--;
                        }
                        else
                            cout<<'P';
                    }
                }
                else{
                    if(moves[i]=='P'&&c){
                        cout<<'S';
                        c--;
                    }
                    else if(moves[i]=='S'&&a){
                        cout<<'R';
                        a--;
                    }
                    else if(moves[i]=='R'&&b){
                        cout<<'P';
                        b--;
                    }
                    else{
                        if(c1){
                            cout<<'S';
                            c1--;
                        }
                        else if(a1){
                            cout<<'R';
                            a1--;
                        }
                        else
                            cout<<'P';
                    }
                }
            }
            cout<<"\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}