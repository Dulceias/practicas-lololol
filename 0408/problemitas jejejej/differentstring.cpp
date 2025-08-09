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
#define inf 10000000000000

void solve() {
    string s;
    cin >> s;

    bool pos = 0;
    forn(i, 0, s.size()){
        if(s[i] != s[i + 1] && i + 1 < s.size()){
            pos = 1;
            break;
        }
    }

    if(pos){
        yes;
        forn(i, 0, s.size()){
            forn(j, 0, s.size() - 1){
                if(s[i] != s[j]) swap(s[i], s[j]);
            }
        }
        cout << s << endl;
    } else no;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
}