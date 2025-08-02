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
 
void solve() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> servs;
    unordered_map<string, string> cmds;

    forn(i, 0, n){
        string a, b;
        cin >> a >> b;
        b += ";";
        servs[a] = b;
    }

    forn(i, 0, m){
        string a, b;
        cin >> a >> b;
        cmds[a] = b;
    }

    vector<string> hola;

    for(auto cmd : cmds){
        for(auto serv : servs){
            if(cmd.S == serv.S){
                hola.pb(cmd.F + " " + cmd.S + " #" + serv.F);
                break;
            }
        }
    }

    reverse(hola.begin(), hola.end());

    for(auto omg : hola) cout << omg << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}