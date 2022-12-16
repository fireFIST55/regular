#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct info{
    string name;
    int length, income, height, wieght, serial;
};

void solve(){
    int n; cin >> n;
    struct info cand[n];
    for(int i = 0; i < n; i += 1){
        cin >> cand[i].name >> cand[i].income >> cand[i].height >> cand[i].wieght;
        cand[i].length = cand[i].name.length(); cand[i].serial = i;
    }
    for(int i = 0; i < n; i += 1){
        for(int j = i + 1; j < n; j += 1){
            struct info &a = cand[i];
            struct info &b = cand[j];
            if(a.income > b.income) continue;
            else if(a.income < b.income) swap(a, b);
            else{
                if(a.height > b.height) continue;
                else if(a.height < b.height) swap(a, b);
                else{
                    if(a.wieght < b.wieght) continue;
                    else if(a.wieght > b.wieght) swap(a, b);
                    else{
                        if(a.length < b.length) continue;
                        else if(a.length > b.length) swap(a, b);
                        else{
                            if(a.serial <= b.serial) continue;
                            else swap(a, b);
                        }
                    }
                }
            }
        }
    }
    for(struct info node: cand) cout << node.serial + 1 << '\n';
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