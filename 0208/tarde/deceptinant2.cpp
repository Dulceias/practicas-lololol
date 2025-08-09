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
#define cout(x) cout << x << endl
#define forn(i, x, n) for (int i = x; i < n; i++)
#define mod 1e9 + 7;
#define inf 1e18;

ll di[4] = {-1, 1, 0, 0};
ll dj[4] = {0, 0, -1, 1};
vvi vis;
ll n, m, regions = 0;
ll act = 0;

void floodfill(ll i, ll j){
    if(i <= 0 || i > n || j <= 0 || j > m) return;
    if(vis[i][j] == 0 || vis[i][j] != act) return;
    vis[i][j] = -1;
    //cout << i << " " << j << endl;
    forn(d, 0, 4){
        floodfill(i + di[d], j + dj[d]);
    }
}

void solve() {
    cin >> n >> m;
    vis.assign(n + 5, vi(m + 5, 0));

    forn(i, 1, n + 1){
        forn(j, 1, m + 1){
            cin >> vis[i][j];
        }
    }

    forn(i, 1, n + 1){
        forn(j, 1, m + 1){
            if(vis[i][j] != -1){
                act = vis[i][j];
                floodfill(i, j);
                regions++;
            }
        }
    }

    cout << regions;

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}