#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    cout<<fixed<<setprecision(15);
    int n,l;
    double t=0,ans=0,dis,left=0,right=0,v1=1.0,v2=1.0,last_left=0,last_right;
    cin>>n>>l;
    last_right=dis=l;
    vector<double>vec(n);
    for(auto &it:vec)   cin>>it;
    for(int i=0,j=n-1;;){
        t=((dis-(left+right))/1.0)/(v1+v2);
        double s1,s2;
        s1=v1*t;
        s2=v2*t;
        if(i<=j&&vec[i]<left+s1&&vec[j]>last_right-s2){
            //cout<<"first for\n";
            double x,y;
            x=(vec[i]/1.0-last_left)/v1;
            y=(last_right-vec[j]/1.0)/v2;
            if(x<y){
                //cout<<"x<y\n";
                ans+=x;
                last_left=left=vec[i];
                last_right=right=(last_right-v2*x);
                right=l-right;
                i+=1;
                v1+=1;
            }
            else{
                //cout<<"y<x\n";
                ans+=y;;
                last_right=right=vec[j];
                last_left=left=(last_left+y*v1);
                j-=1;
                right=l-right;
                v2+=1;
                if(x==y){
                    //cout<<"Duitai.\n";
                    v1+=1;
                    last_left=left=vec[i];
                    i+=1;
                }
            }
        }
        else if(i<=j&&(vec[i]<s1+left||vec[j]>last_right-s2)){
            //cout<<"second for\n";
            double x,y;
            if(vec[i]<s1+left){
                //cout<<"First if\n";
                x=(vec[i]-last_left)/v1;
                ans+=x;
                last_left=left=vec[i];
                last_right=right=(last_right-v2*x);
                right=l-right;
                i+=1;
                v1+=1;
            }
            else{
                //cout<<"Second if\n";
                y=(last_right-vec[j]/1.0)/v2;
                ans+=y;
                last_right=right=vec[j];
                last_left=left=(last_left+y*v1);
                right=l-right;
                j-=1;
                v2+=1;
            }
        }
        else{
            ans+=t;
            break;
        }
        //cout<<"Left:\t"<<left<<" Last left:\t"<<last_left<<" Right:\t"<<right<<" Last right:\t"<<last_right<<" Time:\t"<<ans<<endl;
        //cout<<ans<<endl<<endl<<endl;
    }
    cout<<ans<<"\n";
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}