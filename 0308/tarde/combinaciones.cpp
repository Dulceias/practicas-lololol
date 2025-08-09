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

//para resolver n combino r usas esas 3 funciones lololol

//para calcular los inversos de no se k
//factorial, un inverso y un inverso
//primera funcion cacula todo slos factoriales. lineal
//auxiliar para calcular potencias. log
//calcular los inversos. lineal

//O(n + log mod)
ll maxs = 1000005;
ll fact[1000010];
ll inv[1000010];

void factoriales() {
    fact[0] = 1;
    forn(i, 1, maxs + 1) fact[i] = (fact[i - 1] * i) % mod;
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while(b > 0){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1; // b /= 2;
    }
    return res;
}

void invertidos() {
    inv[maxs] = binpow(fact[maxs], mod - 2);
    for(int i = maxs; i >= 1; i--){ 
        inv[i - 1] = inv[i] * i % mod;
    }
}

void solve(){
    ll n;
    cin >> n;

    factoriales();
    invertidos();

    while(n--){
        ll a, b;
        cin >> a >> b;
        cout << (fact[a] * inv[b] % mod * inv[a - b] % mod) % mod << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}