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

vl pos;
ll n, k;

bool check(ll m){
    ll vacas = 0;
    ll i = 0;
    while(i < n && vacas < k){
        vacas++;
        ll l = pos[i] + m;
        ll r = l + m;

        while(i < n && pos[i] <= r) i++;
    }

    return i == n;
}
 
void solve() {
    cin >> n >> k;

    pos.resize(n + 1);
    forn(i, 0, n) cin >> pos[i];

    sort(pos.begin(), pos.end());

    int l = 0, r = 1e9, blast = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(check(m)){
            blast = m;
            r = m - 1;
        } else l = m + 1;
    }

    cout << blast << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    solve();
    return 0;
}
