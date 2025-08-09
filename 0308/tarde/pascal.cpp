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

void pascal(int n, int r){
    vvi dp(n, vi(n, 0));

    forn(i, 0, n + 1){
        dp[i][0] = 1;
        dp[i][i] = 1;
    }

    forn(i, 1, n){
        forn(j, 1, n){
            if(i == j) continue;
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] % mod;
        }
    }
}

/*
int pascal(int n, int r) { //binomial, combinaciones o como kiera k se llame lololol
    if(r == 0 || n == r) return 1;
    return (pascal(n - 1, r - 1) + pascal(n - 1, r)) % mod;
}
*/

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    //while(t--) pascal();
    return 0;
}