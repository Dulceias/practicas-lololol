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
    string s;
    getline(cin, s);

    map<string, ll> mp;
    vector<string> words;

    string t = "";
    for(auto c : s){
        if(c == ' '){
            if(!t.empty()){
                words.pb(t);
                t = "";
            }
        } else {
            t += c;
        }
    }
    
    if(!t.empty()){
        words.pb(t);
    }

    for(auto w : words){
        mp[w]++;
    }

    string mas = "";
    ll maxs = 0;

    for(auto w : words){
        if(mp[w] > maxs){
            maxs = mp[w];
            mas = w;
        }
    }

    cout << mas << " " << maxs;

}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}