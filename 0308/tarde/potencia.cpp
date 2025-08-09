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

//para calcular a^b

ll binpow(ll a, ll b) {
    ll res = 1;
    while(b > 0){
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1; // b /= 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    //while(t--) binpow();
    return 0;
}