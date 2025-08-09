#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
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
const ll inf = 1e18;
 
void solve() {
    ll n;
    cin >> n;

    ll a[n + 5][n + 5];

    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            if(i == j) a[i][j] = 0;
            else a[i][j] = inf;
        }
    }

    forn(i, 2, n + 1){
        forn(j, 1, i){
            string x;
            cin >> x;
            if(x == "x" && a[i][j] != 0){
                a[i][j] = inf;
                a[j][i] = inf;
            } else if(a[i][j] != 0){
                int b = stoi(x);
                a[i][j] = b;
                a[j][i] = a[i][j];
            }
        }
    }

    ll maxs = 0;

    forn(k, 1, n + 1){
        forn(i, 1, n + 1){
            forn(j, 1, n + 1){
                a[i][j] = min(a[i][j], a[k][j] + a[i][k]);
            }
        }
    }
    cout << endl;

    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            maxs = max(maxs, a[i][j]);
        }
    }

    cout << maxs;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}
