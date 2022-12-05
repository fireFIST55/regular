#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<vector<int>>vc(3, vector<int>(3, 0));
    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < 3; j += 1) cin >> vc[i][j];
    }

    bool no = 0;
    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < 3; j += 1){
            if(vc[i][j] - vc[(i + 1)%3][j] != vc[i][(j + 1)%3] - vc[(i + 1)%3][(j + 1)%3]) no = 1;
        }
    }

    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < 3; j += 1){
            if(vc[i][j] - vc[i][(j + 1)%3] != vc[(i + 1)%3][j] - vc[(i + 1)%3][(j + 1)%3]) no = 1;
        }
    }

    no?cout << "No\n": cout << "Yes\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}