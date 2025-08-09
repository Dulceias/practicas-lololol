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
typedef vector<string> vs;
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
#define forn(i, x, n) for (ll i = x; i < n; i++)
#define mod 1000000007
#define inf 1000000000000000000

vvl dp;

void pascal(ll n, ll r){
    forn(i, 0, n + 1){
        dp[i][0] = 1;
        if(i <= r) dp[i][i] = 1;
    }

    forn(i, 0, n + 1){
        forn(j, 1, min(i, r)){
            if(i == j) continue;
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] % mod;
        }
    }
}

void solve() {
    ll n, m, t;
    cin >> n >> m >> t;
    dp.assign(max(n, m) + 5, vl(t + 1, 0));
    pascal(max(n, m), t);

    ll r = 0;

    forn(i, 4, t){
        r += dp[n][i] * dp[m][t - i];
    }

    cout << r;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}