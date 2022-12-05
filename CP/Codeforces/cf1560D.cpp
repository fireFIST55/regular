#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007
#define M 2e18

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t ;
    cin>>t;
    long long  arr [64 +5];
    string  power [64+5];
    arr[0] = 1;
 
    for( int i = 1  ; i < 64 ; i ++)
    {
        arr[i]= 2*arr[i-1];
    }
 
    for( int i = 0  ; i < 64 ; i ++)
    {
        power[i]= to_string(arr[i]);
    }
 
    while( t-- )
    {
 
        string s ;
        cin>>s;
        long long  minimum = 500000;
 
        for( int i = 0 ; i < 64 ; i ++ )
        {
            int x =0 ,y =0 ;
            long long  ans=0;
            long long nerassed =0 ;
 
            while( x<s.size() && y <power[i].size())
            {
                if(s[x] == power[i][y])
                {
                    y++;
                    nerassed++;
                }
                x++;
            }
            ans =( s.size()-nerassed)+ (power[i].size()-nerassed);
            minimum =  min(minimum,ans);
        }
        cout<<minimum<<endl;
    }

    
    return 0;
}