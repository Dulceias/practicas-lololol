#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef map<int, int> mii;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
 
#define F first
#define S second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define tt int t; cin >> t
#define cout(x) cout << x << endl
#define forn(i, x, n) for (int i = x; i < int(n); i++)

const double error = 10e-7;

vd pos;
vd speed;
double ans = (double)INT_MAX;
double minTime;
bool loPp = 0, hiPp = 0;

double check(double m){
    double maxTime = 0;
    forn(i, 0, pos.size()){
        if(pos[i] == m) continue;

        double timei = abs(pos[i] -  m) / speed[i];
        if(timei > maxTime){
            maxTime = timei;
            loPp = 0;
            hiPp = 0;
            if(pos[i] > m) hiPp = 1;
            else loPp = 1;
        } else if(timei == maxTime){
            if(pos[i] > m) hiPp = 1;
            else loPp = 1;
        }
        //cout << maxTime << " " << timei << endl;
    }
    return maxTime;
}

void solve() {
    int n;
    cin >> n;

    pos.resize(n + 1);
    speed.resize(n + 1);

    double lo = 0, hi = 0, m;

    forn(i, 0, n){
        cin >> pos[i];
        hi = max(hi, pos[i]);
    }
    forn(i, 0, n) cin >> speed[i];

    while(hi - lo >= error){
        m = (lo + hi) / 2;
        minTime = check(m);
        ans = min(ans, minTime);
        cout << m << " " << minTime << endl;
        if(loPp && hiPp) break;
        else if(loPp) hi = m;
        else lo = m;
    }

    cout << fixed << ans;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}