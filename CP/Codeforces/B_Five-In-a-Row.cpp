#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<string> &a){
 
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 10; i++){
            if(i + 4 >= 10) continue;
            if(a[j][i] == a[j][i + 1] && a[j][i + 1]== a[j][i + 2] && a[j][i + 2] == a[j][i + 3] && a[j][i + 3] == a[j][i + 4] &&  a[j][i] == 'X'){
                return true;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i + 4 >= 10) continue;
            if(a[i][j] == a[i + 1][j] && a[i + 1][j]== a[i + 2][j] && a[i + 2][j] == a[i + 3][j] && a[i + 3][j] == a[i + 4][j] &&  a[i][j] == 'X'){
                return true;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i + 4 >= 10 || j + 4 >= 10) continue;
            if(a[i][j] == a[i + 1][j + 1] && a[i + 1][j + 1]== a[i + 2][j + 2] && a[i + 2][j + 2] == a[i + 3][j + 3] && a[i + 3][j + 3] == a[i + 4][j + 4] &&  a[i][j] == 'X'){
                return true;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i + 4 >= 10 || j - 4 < 0) continue;
            if(a[i][j] == a[i + 1][j - 1] && a[i + 1][j - 1]== a[i + 2][j - 2] && a[i + 2][j - 2] == a[i + 3][j - 3] && a[i + 3][j - 3] == a[i + 4][j - 4] &&  a[i][j] == 'X'){
                return true;
            }
        }
    }
 
    return false;
}

void solve(){
    vector<string> a(10);
    for (auto &i: a) cin >> i;
 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a[i][j] == '.') {
                a[i][j] = 'X';
                if (check(a)) {
                    cout << "YES";
                    return;
                }
                a[i][j] = '.';
            }
        }
    }
    cout << "NO";
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