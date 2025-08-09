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

const int mod = 1e9 + 7;
const int inf = 1e18;

ll di[4] = {-1, 1, 0, 0};
ll dj[4] = {0, 0, -1, 1};
vector<vector<char> > vis;

ll n, m;
ll maxs = 0;
ll act = 0;

void floodfill(ll x, ll y){
    if(x < 0 || x >= n || y < 0 || y >= n) return;
    if(vis[x][y] == '.') return;
    act++;
    maxs = max(maxs, act);
    forn(i, '.', 4){
        floodfill(x + di[i], y + dj[i]);
    }
}

void solve(){
    cin >> n;

    vis.assign(n + 5, vector<char>(n + 5));

    forn(i, 0, n){
        forn(j, 0, n){
            cin >> vis[i][j];
        }
    }

    forn(i, 0, n){
        forn(j, 0, n){
            if(!vis[i][j]) floodfill(i, j);
        }
    }

    cout << "Maximo calculado: " << maxs;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}