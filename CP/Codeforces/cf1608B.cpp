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

void solve(){
    bool no = 0;
    int n, a, b;
    cin>> n>> a>> b;
    if(abs(a - b) >= 2 || a > (n + 1)/2 - 1 || b > (n + 1)/2 - 1){
        cout<< -1 <<endl;
        return;
    }

    vector<int>ans(n);
    if(a > b){
        int x = n, cnt = 0;
        for(int i = 1; i < n && !no && cnt < a; i += 2){
            if(x < 1) no = 1;
            else ans[i] = x--, cnt += 1;
        }

        if(cnt < a) no = 1;
        for(int i = 0; i < n && !no; i += 1){
            if(!ans[i]){
                if(x < 1)   no = 1;
                else ans[i] = x--;
            }
        }
    }
    else if(a < b){
        int x = 1, cnt = 0;
        for(int i = n - 2; i >= 0 && cnt < b && !no; i -= 2){
            if(x > n) no = 1;
            else ans[i] = x++, cnt += 1;
        }

        if(cnt < b) no = 1;
        for(int i = n - 1; i >= 0 && !no; i -= 1){
            if(!ans[i]){
                if(x > n) no = 1;
                else ans[i] = x++;
            }
        }
    }
    else{
        int x = 2, cnt = 0;
        ans[n - 1] = 1;
        for(int i = n - 3; i >= 0 && cnt < a && !no; i -= 2){
            if(x > n) no = 1;
            else ans[i] = x++, cnt += 1;
        }

        if(cnt < a) no = 1;
        for(int i = n - 1; i >= 0 && !no; i -= 1){
            if(!ans[i]){
                if(x > n) no = 1;
                else ans[i] = x++;
            }
        }
    }

    if(no) cout<< -1<< endl;
    else{
        int g = 0, s = 0;
        for(int i = 1; i < n - 1; i += 1){
            if(ans[i] > ans[i - 1] && ans[i] > ans[i + 1]) g += 1;
            else if(ans[i] < ans[i - 1] && ans[i] < ans[i + 1]) s += 1;
        }

        if(a != g || b != s){
            cout<< - 1<< endl;
            return;
        }

        for(int X: ans) cout<< X<<" ";
        cout<<endl;
    }
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