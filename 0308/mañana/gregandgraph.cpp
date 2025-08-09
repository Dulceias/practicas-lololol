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
#define mod 1e9 + 7
#define inf 1e18

void solve() {
    ll n;
    cin >> n;

    ll a[n + 5][n + 5];
    vb vis(n + 1);
    vl del(n + 1);
    vl sum;
    
    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            cin >> a[i][j];
        }
    }

    forn(i, 1, n + 1){
        cin >> del[i];
        vis[del[i]] = 0;
    }

    reverse(del.begin(), del.end());

    forn(k, 0, del.size()-1){
        ll suma = 0;
        if(!vis[del[k]]){
            vis[del[k]] = 1;
            forn(i, 1, n + 1){
                forn(j, 1, n + 1){
                    a[i][j] = min(a[i][j], a[del[k]][j] + a[i][del[k]]);
                }
            }
        }

        forn(i, 1, n + 1){
            forn(j, 1, n + 1){
                if(vis[i] && vis[j]) suma += a[i][j];
            }
        }
        sum.pb(suma);
    }   

    reverse(sum.begin(), sum.end());
    for(auto x : sum) cout << x << " ";
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}