#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
char mp[5][100];

void solve(){
    scanf("%d%d", &n, &k);
    for(int i = 1;i <= 4;i++) {
        for(int j = 1;j <= n;j++) {
            mp[i][j] = '.';
        }
    }
    if(k % 2 == 0) {
        k /= 2;
        for(int i = 2;i < 2 + k;i++) {
            mp[2][i] = mp[3][i] = '#';
        }
    } else {
        if(k <= n - 2) {
            k /= 2;
            mp[2][n / 2 + 1] = '#';
            for(int i = 1;i <= k;i++) {
                mp[2][n / 2 + 1 - i] = mp[2][n / 2 + 1 + i] = '#';
            }
        } else {
            for(int i = 2;i <= n - 1;i++) mp[2][i] = '#';
            mp[3][2] = mp[3][n - 1] = '#';
            k -= n;
            for(int i = 1;i <= k;i++) mp[3][2 + i] = '#';
        }
    }
    printf("YES\n");
    for(int i = 1;i <= 4;i++) {
        for(int j = 1;j <= n;j++) printf("%c", mp[i][j]);
        printf("\n");
    }
}

int main(void){
    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}