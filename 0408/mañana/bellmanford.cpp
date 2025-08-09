#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
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
typedef pair<pll, ll> ppl;

#define F first
#define S second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define forn(i, x, n) for (ll i = x; i < n; i++)
#define mod 1000000007
#define inf 1000000000000000000

ll graph[1000000000][3];
vl dist;
ll n, m;

void bellman(ll u){
    dist[u] = 0;
    forn(i, 0, n - 1){
        forn(j, 0, m){
            if(dist[graph[j][0]] != inf && dist[graph[j][0]] + graph[j][2] < dist[graph[j][1]]){
                dist[graph[j][1]] = dist[graph[j][0]] + graph[j][2];
            }
        }
    }
}

void solve() {
    cin >> n >> m;

    dist.assign(n + 1, inf);

    forn(i, 0, m){
        ll s, f, w;
        cin >> s >> f >> w;
        graph[i][0] = s;
        graph[i][1] = f;
        graph[i][2] = w;
    }

    bellman(0);

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}

/*

*/