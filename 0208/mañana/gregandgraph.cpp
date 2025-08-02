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
#define cout(x) cout << x << endl
#define forn(i, x, n) for (int i = x; i < int(n); i++)
 
const int mod = 1e9 + 7;
const int inf = 1e18;
 
void solve() {
    ll n;
    cin >> n;

    ll a[n + 5][n + 5];
    vb vis(n);

    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            if(i == j) a[i][j] = 0;
            else a[i][j] = inf;
        }
    }

    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            cin >> a[i][j];
        }
    }

    forn(k, 1, n + 1){
        forn(i, 1, n + 1){
            forn(j, 1, n + 1){
                a[i][j] = min(a[i][j], a[k][j] + [i][k]);
            }
        }
    }   

    ll sum = 0;

    forn(i, 1, n + 1){
        forn(j, 1, n + 1){
            sum += a[i][j];
        }
    }

    vl vert(n);
    forn(i, 0, n){
        cin >> vert[i];
    }

    

    /*
    oigan habando de algo mas,
    aprecio mucho a cristofer...
    en vdd es el unico maestro que mehace sentir incluida
    y me siento muy cómoda con él :3
    me siento cómoda molestándolo (aunk sea a mi manera...)
    (o sea que en vdd no es molestar)
    porwue ns,.... desde el principio me ha incluido entodo asii k
    lo kiero mucho profe !! espero que nunca se quede calvo <3
    */

    /*
    can you imagine fi there were like,...
    dios mio me acabod e quiocar escribiendo were pork puse where NOoooOO
    dulseias que te está ocurriendo!!!!
    oigan saben que la vdd me siento algo sola pro kno le digan a nadie
    mentira tengo muchos amigos la vida me quier ey puedo hacer más amigos aún!!
    void a saludar a los amigos de gabriel pork son buena onda
    la voz de la giselle es bien linda....
    o gisel??? creo que es gisel

    iba a decir can you imagine if there were like...
    un olimpico de ia......
    aunque la vdd is hay
    
    te amo camiloooo
    TE AMO
    :3
    espero que 
    nos casmeos
    muy protnoooo
    y que hagamos el s
    Qué...

    
    que sueño tengooooo aaaaa

    sabian que me gusta  mucho
    camilo...
    es lowkey
    el amor de mi vida

    te amo mi amor 
    te amo mi vida
    camilo samuel
    medrano martínez <3

    Tu sonrisa .....
    lo que a mi mirada vislumbra.
    */
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}
