#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <numeric>
#include <random>
#include <ctime>
#include <set>
#include <map>
using namespace std;

// General
#define rand(a, b) rand() % (b - a + 1) + a
#define endl \
    << '\n'
#define endw << ' '
#define space << ' ' <<
#define done exit(0)
#define print(Yes)                    \
    cout << (Yes ? "Yes" : "No")endl; \
    return
#define printup(YES)                  \
    cout << (YES ? "YES" : "NO")endl; \
    return
#define printdown(yes)                \
    cout << (yes ? "yes" : "no")endl; \
    return
#define ll long long
#define ld long double
#define foi(n) for (ll i = 1; i <= n; ++i)
#define foj(n) for (ll j = 1; j <= n; ++j)
#define fok(n) for (ll k = 1; k <= n; ++k)
#define foir(n) for (ll i = n; i > 0; --i)
#define fojr(n) for (ll j = n; j > 0; --j)
#define fokr(n) for (ll k = n; k > 0; --k)

// Pair
#define fr first
#define sc second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<ld, ld>
#define pss pair<string, string>
#define pbb pair<bool, bool>
#define pbi pair<bool, int>
#define pbl pair<bool, ll>
#define pbd pair<bool, ld>
#define pbs pair<bool, string>
#define pib pair<int, bool>
#define plb pair<ll, bool>
#define pdb pair<ld, bool>
#define psb pair<string, bool>
#define pil pair<int, ll>
#define pid pair<int, ld>
#define pis pair<int, string>
#define pli pair<ll, int>
#define pld pair<ll, ld>
#define pls pair<ll, string>
#define pdi pair<ld, int>
#define pdl pair<ld, ll>
#define pds pair<ld, string>
#define psi pair<string, int>
#define psl pair<string, ll>
#define psd pair<string, ld>

// Vector
#define pb(a) push_back(a)
#define vi vector<int>
#define vl vector<ll>
#define vd vector<ld>
#define vs vector<string>
#define vb vector<bool>
#define vii vector<pii>
#define vll vector<pll>
#define vdd vector<pdd>
#define vss vector<pss>
#define vbb vector<pbb>
#define vbl vector<pbl>
#define vbd vector<pbd>
#define vbs vector<pbs>
#define vbi vector<pbi>
#define vlb vector<plb>
#define vdb vector<pdb>
#define vsb vector<psb>
#define vib vector<pib>
#define vil vector<pil>
#define vid vector<pid>
#define vis vector<pis>
#define vli vector<pli>
#define vld vector<pld>
#define vls vector<pls>
#define vdi vector<pdi>
#define vdl vector<pdl>
#define vds vector<pds>
#define vsi vector<psi>
#define vsl vector<psl>
#define vsd vector<psd>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvd vector<vd>
#define vvs vector<vs>
#define vvii vector<vii>
#define vvll vector<vll>
#define vvdd vector<vdd>
#define vvss vector<vss>
#define vvbb vector<vbb>
#define vvbl vector<vbl>
#define vvbd vector<vbd>
#define vvbs vector<vbs>
#define vvbi vector<vbi>
#define vvlb vector<vlb>
#define vvdb vector<vdb>
#define vvsb vector<vsb>
#define vvib vector<vib>
#define vvil vector<vil>
#define vvid vector<vid>
#define vvis vector<vis>
#define vvli vector<vli>
#define vvld vector<vld>
#define vvls vector<vls>
#define vvdi vector<vdi>
#define vvdl vector<vdl>
#define vvds vector<vds>
#define vvsi vector<vsi>
#define vvsl vector<vsl>
#define vvsd vector<vsd>
#define vall(v, n) v.begin() + 1, v.begin() + n + 1
#define vchoose(v, a, b) v.begin() + a, v.begin() + b + 1
#define vsort(v, n) sort(vall(v, n))
#define vsortr(v, n) sort(vall(v, n), greater<decltype(v[0])>())
#define vmin(v, n) min_element(vall(v, n))
#define vmax(v, n) max_element(vall(v, n))
#define vlbound(v, n, x) (ll)(lower_bound(vall(v, n), x) - v.begin())
#define vlboundr(v, n, x) (ll)(v.begin() + n + 1 - lower_bound(vall(v, n), x))
#define vubound(v, n, x) (ll)(upper_bound(vall(v, n), x) - v.begin())
#define vuboundr(v, n, x) (ll)(v.begin() + n + 1 - upper_bound(vall(v, n), x))
#define vcount(v, n, x) (ll)(vubound(v, n, x) - vlbound(v, n, x))

// Magic
// #define int long long
// #define MOD
#define N 100005

int n, p, q;
vi a(N);

void Prepare()
{
}

void Debug()
{
}

void Solve()
{
    cin >> n >> p >> q;
    int res = 0;
    foi(n) cin >> a[i];
    foi(n) cout<<a[i] endw;
    cout endl;
    vsort(a, n);
    foi(n) cout<<a[i] endw;
    cout endl;
    for (int i = n; i > 0; --i)
    {
        if (q-- > 0)
            res += a[i];
        else
        {
            for (int j = 1; j <= i; ++j)
            {
                if (p-- > 0)
                    res -= a[i];
                else
                    return cout << res endl, void();
            }
            break;
        }
    }
    cout << res endl;
}

signed main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // Prepare();
    // while(true) cout endl,
    int t;
    cin >> t;
    while (t--)
        // int q; cin >> q;
        // while (q--)
        Solve();
}