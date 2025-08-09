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

vvi graph;
vi color; //visited color
vi vis;

bool dfs(int u, int c){
    vis[u] = 1;
    color[u] = c;

    for(auto v : graph[u]){
        if(color[v] == 0){
            bool t = dfs(v, 3 - c);
            if(!t) return false;
        }
        if(color[v] == c) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;

    graph.assign(n + 1, vi());
    color.assign(n + 1, 0);
    vis.assign(n + 1, 0);

    forn(i, 0, m){
        int a, b;
        cin >> a >> b;     
        graph[a].pb(b);
        graph[b].pb(a);
    }

    bool pos = 1;
    forn(i, 1, n + 1){
        if(vis[i]) continue;
        if(!dfs(i, 1)){
            pos = 0;
            break;
        }
    }

    if(pos) forn(i, 1, n + 1) cout << color[i] << " ";
    else cout << "IMPOSSIBLE";

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}