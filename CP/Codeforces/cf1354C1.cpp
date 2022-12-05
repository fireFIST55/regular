#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--)
    {
        double n;
        cin>>n;
        double k = 3.141592653589793238/(2*n)  ;
        cout<<std::fixed<<pow(tan(k),-1)<<endl;
    }
 
    return 0;
}