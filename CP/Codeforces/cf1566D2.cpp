#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define endl '\n'

struct info{
    int sight, index;
};

bool compare(struct info a, struct info b){
    if(a.sight<b.sight) return 1;
    else if(a.sight>b.sight)    return 0;
    else{
        if(a.index < b.index)   return 1;
        else return 0;
    }
}

void solve(){
    int row, col, ans = 0;
    cin>> row>> col;
    struct info person[row*col];
    vector<vector<int>>seat(row, vector<int>(col));

    for(int i = 0; i<row*col; i += 1){
        cin>>person[i].sight;
        person[i].index = i + 1;
    }

    sort(person, person + row*col, compare);

    for(int i = 0; i<row*col; i += 1)   person[i].index = -person[i].index;

    for(int i = 0, k = 0; i<row; i += 1){
        sort(person + k, person + k + col, compare);

        ordered_set st;

        for(int j = 0; j < col; j += 1){
            st.insert(-person[k].index);
            
            ans += st.order_of_key(-person[k].index);
            k += 1;
        }
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}