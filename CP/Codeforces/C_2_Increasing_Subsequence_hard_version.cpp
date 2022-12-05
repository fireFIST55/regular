#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll int n ; cin >> n;
    ll int  arr[n];
    for ( ll int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string str; 
    ll int p1 = 0 , p2 = n-1 ;
    ll int ch = 0 ;
    while ( p1 <= p2)
    {
        ll int l = arr[p1] , r = arr[p2];
        if ( (ch < l && l <  r ) || ( ch < l && ch >= r )){
            ch = l ;
            p1 ++  ;
            str.push_back('L');            
        }
        else if (( ch < r && r < l ) || ( ch < r && ch >= l )){
            ch = r ;
            p2 -- ;
            str.push_back('R');
        }        
        else if ( ch > l && ch > r ){
            p1 = -1 ;
            break;
        }
        else if ( p1 == p2 && ch < l ){
            p1 = -1 ;
            str.push_back( 'L');
            break;
        }
        else { break;}
    }   
    if ( p1 != -1 && p1 < p2 && ch < arr[p1]  && arr[p1] == arr[p2] ){
        //cout << p1 << " " << p2 << " p1 and p2 \n";
        int a =  1 , b = 1  ; 
        while (arr[p1] < arr[p1 +1] )
        {
            a ++ ;
            p1 ++ ; 
        }
        while (arr[p2] < arr[p2 -1 ] )
        {
            b ++ ;
            p2 -- ;
        }
        if ( a >= b ){
            for ( int  i = 0; i < a ; i++)
            {
                str.push_back('L');
            }            
        }
        else {
            for ( int  i = 0; i < b ; i++)
            {
                str.push_back( 'R');
            }            
        }
    }
    cout << str.size()<< '\n';
    cout << str ;     
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}