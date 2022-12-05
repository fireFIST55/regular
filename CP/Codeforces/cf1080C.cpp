#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

int calc(int w, int h){
    return (w&1?w/2 + 1: w/2)*(h&1?h/2 + 1: h/2) + (w/2)*(h/2);
}

void solve(){
    int h, w, r1, c1, r2, c2, r12, c12, r22, c22;
    cin>> h>> w>> r1>> c1>> r2>> c2;
    cin>> r12>> c12>> r22>> c22;
    swap(r1, c1);
    swap(r2, c2);

    swap(r12, c12);
    swap(r22, c22);

    r1 = h + 1 - r1;
    r2 = h + 1 - r2;

    r12 = h + 1 - r12;
    r22 = h + 1 - r22;

    int black = 0, white = 0;
    int r = r2 - r1 + 1, c = c2 - c1 + 1;
    int R = r22 - r12 + 1, C = c22 - c12 + 1;
    black = calc(w, h);
    white = calc(w, h);

    if(r1&1){
        if(c1&1){
            black -= calc(r, c);
            white += calc(r, c);
        }
        else{
            black -= (calc(r, c + 1) - (r&1? r/2 + 1: r/2));
            white += (calc(r, c + 1) - (r&1? r/2 + 1: r/2));
        }
    }
    else{
        if(c1&1){
            black -= (calc(r, c - 1) + (r&1?r/2: r/2 + 1));
            white += (calc(r, c - 1) + (r&1?r/2: r/2 + 1));
        }
        else{
            black -= (calc(r, c));
            white += (calc(r, c));
        }
    }

    if(r12&1){
        if(c12&1){
            black += calc(R, C);
            white -= calc(R, C);
        }
        else{
            black += calc(R, C);
            white -= calc(R, C);
        }
    }
    else{
        if(c12){
            black += (calc(R, C - 1) + (R&1?R/2 + 1: R/2));
            white -= (calc(R, C - 1) + (R&1?R/2 + 1: R/2));
        }
        else{
            black += calc(R, C);
            white -= calc(R, C);
        }
    }

    cout<<black <<" " <<white <<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}