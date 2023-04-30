 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;
 
 void solve(){
     bool yes = 0;
     int n; cin >> n;
     vector<int>vc(n);
     for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        if(a <= i + 1) yes = 1;
     }
     cout << (yes?"YES\n": "NO\n");
 }
 
 int main(void){
     ios_base::sync_with_stdio(false); 
     cin.tie(NULL);
 
     int t = 1;
     cin >> t;
     for(int i = 1; i <= t; i += 1)
         solve();

     return 0;
 }