#include<bits/stdc++.h>
#define ll long long
using namespace std;

#define N 105
struct Point
{
    ll x, y;
} p[N];
 
ll dis(ll x1, ll y1, ll x2, ll y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve(){
    ll x0, y0, ax, ay, bx, by;
    ll xs, ys, t, ans = 0;
    cin >> x0 >> y0 >> ax >> ay >> bx >> by;
    cin >> xs >> ys >> t;
    ll cnt = 0;
    p[0].x = x0, p[0].y = y0;
    ll sumt1 = t, sumt2 = t;
    while (++cnt)
    {
        p[cnt].x = p[cnt - 1].x * ax + bx;
        p[cnt].y = p[cnt - 1].y * ay + by;
        if (p[cnt].x > xs && p[cnt].y > ys && dis(xs, ys, p[cnt].x, p[cnt].y) > t)
            break;
    }
 
    for (int i = 0; i <= cnt; i++)
    {
        ll tans = 0, tt = t;
        if (dis(xs, ys, p[i].x, p[i].y) <= tt)
        {
            tt -= dis(xs, ys, p[i].x, p[i].y);
            tans++;
        }
        else
        {
            ans = max(ans, tans);
            continue;
        }
        for (int j = i; j > 0; j--)
        {
            if (dis(p[j].x, p[j].y, p[j - 1].x, p[j - 1].y) <= tt)
            {
                tt -= dis(p[j].x, p[j].y, p[j - 1].x, p[j - 1].y);
                tans++;
            }
            else
                break;
        }
        for (int j = 1; j <= cnt; j++)
        {
            if (dis(p[j].x, p[j].y, p[j - 1].x, p[j - 1].y) <= tt)
            {
                tt -= dis(p[j].x, p[j].y, p[j - 1].x, p[j - 1].y);
                if (j > i)
                    tans++;
            }
            else
                break;
        }
        ans = max(ans, tans);
    }
 
    cout << ans << endl;
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