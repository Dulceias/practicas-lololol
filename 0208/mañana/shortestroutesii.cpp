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

const ll x = 1e16;

void solve() {
    ll n, m, q;
    cin >> n >> m >> q;

    ll mat[n + 5][n + 5];

    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            if(i == j) mat[i][j] = 0;
            else mat[i][j] = x;
        }
    }
    
    forn(i, 0, n){
        forn(j, 0, n){
            cin >> mat[i][j];
        }
    }

    forn(k, 1, n + 1){
        forn(i, 1, n + 1){
            forn(j, 1, n + 1){
                mat[i][j] = min(mat[i][j], mat[k][j] + mat[i][k]);
            }
        }
    }

    
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}