#include<bits/stdc++.h>
#define ll long long
using namespace std;

int value(string s){
    int sum = 0;
    for(int i = 1; i < s.length(); i += 1){
        sum += ((s[i] - 48) + (s[i - 1] - 48)*10);
    }

    return sum;
}

void solve(){
    int n, k, one = 0; cin >> n >> k;
    string s; cin >> s;
    for(char ch: s) one += (ch == '1');
    if(!k){
        cout << value(s) << '\n';
        return;
    }
    else{
        deque<int>zero;
        for(int i = n - 1; i >= 0; i -= 1){
            if(s[i] == '1'){
                if(zero.empty()){
                    one -= 1; break;
                }
                else{
                    int need = zero.front() - i;
                    if(need <= k){
                        s[zero.front()] = '1';
                        s[i] = '0';
                        k -= need;
                        one -= 1;
                    }
                    break;
                }
            }
            else zero.push_back(i);
        }
        if(k && one){
            deque<int>dq;
            for(int i = 0; i < n; i += 1){
                if(s[i] == '1'){
                    if(dq.empty()) break;
                    else{
                        int need = i - dq.front();
                        if(need <= k){
                            s[dq.front()] = '1';
                            s[i] = '0';
                            k -= need;
                        }
                        break;
                    }
                }
                else dq.push_back(i);
            }
        }

        cout << value(s) << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}