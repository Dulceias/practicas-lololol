#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
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
    int n;
    cin >> n;

    set<int> st;
    map<int, int> mp;
    forn(i, 0, n){
        int a;
        cin >> a;
        mp[a]++;
        st.insert(a);
    }

    int r = 0;

    for(auto x : st){
        if(mp[x] > x){
            r += mp[x] - x;
        } else if(mp[x] < x){
            r += mp[x];
        }
    }

    cout << r;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}