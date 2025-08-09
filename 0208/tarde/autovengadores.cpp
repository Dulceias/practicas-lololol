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

ll direccioni[4] = {-1, 1, 0, 0};
ll direccionj[4] = {0, 0, -1, 1};
vector<vector<char> > vis;
ll n, m;

void floodfill(ll i, ll j) {
    if(i <= 0 || i > n || j <= 0 || j > m) return;
    if(vis[i][j] == 'x' || vis[i][j] =='#' || vis[i][j] == ' ') return;
    vis[i][j] = 'x';
    forn(direccion, 0, 4){
        floodfill(i + direccioni[direccion], j + direccionj[direccion]);
    }
}

void solve() {
    cin >> n >> m;

    vis.assign(n + 5, vector<char>(m + 5, ' '));

    forn(i, 1, n + 1){
        forn(j, 1, m + 1){
            cin >> vis[i][j];
        }
    }

    if(vis[1][1] == '#'){
        cout << 0;
        return;
    } else floodfill(1, 1);

    if(vis[n][m] == 'x') cout << 1;
    else cout << 0;

    /*cout << endl;
    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            cout << vis[i][j];
        }
        cout << endl;
    }*/


}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}
