#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
int main ()
{
    int an;
    cin >> an;
    string ans[an];
    for ( int z = 0; z < an; z++ ) {
        long long aa , power;
        cin >> aa >> power;
        long long a[aa];
        for ( long long zz = 0; zz < aa; zz++ ) {
            cin >> a[zz];
        }
        long long arr[100];
        long long check[100];
        check[0] = 1;
        arr[0] = 1;
        long long big = 0;
        for ( long long y = 1; y < 100; y++ ) {
            check[y] = 1;
            big = y;
            arr[y] = arr[y - 1] * power;
            //cout << arr[y] << endl;
            if( arr[y] > 10000000000000000 ) {
                y = 100;
            }
        }
        string answer = "YES";
        if ( power != 1 ) {
            for ( long long y = 0; y < aa; y++ ) {
                if ( answer == "YES" ) {
                    while ( a[y] != 0 ) {
                        for ( long long x = 1; x < big + 1; x++ ) {
                            if ( arr[x] > a[y] ) {
                                if ( check[x - 1] == 1 ) {
                                    a[y] = a[y] - arr[x - 1];
                                    check[x - 1] = 0;
                                    x = big;
                                }
                                else {
                                    answer = "NO";
                                    x = big;
                                    a[y] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        ans[z] = answer;
    }
    for ( int z = 0; z < an; z++ ) {
        cout << ans[z] << endl;
    }
    return 0;
}