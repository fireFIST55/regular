#include<bits/stdc++.h>
#define ll long long
using namespace std;

double pi = 2 * acos(0.0);

void solve(){
    double R;
    int n;
    scanf("%lf %d", &R, &n);
    double r = (R * sin(pi / n * 1.0)) / (1 + sin(pi / n * 1.0));
    printf("%.10lf\n", r);
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    scanf("%d", &t);

    for(int i = 1; i <= t; i += 1){
        printf("Case %d: ", i); solve();
    }
    
    return 0;
}