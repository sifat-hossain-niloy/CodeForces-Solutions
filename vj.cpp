#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ff first
#define ss second
#define pb push_back
#define int long long
#define double long double
#define vi vector<int>
#define vvi vector<vi>
#define vpii vector<pii>
#define pii pair<int, int>
#define Size(v) (int)v.size()
#define all(v) v.begin(), v.end()
#define ffor(i, a, n) for (int i = a; i < n; i++)
#define rfor(i, a, n) for (int i = n - 1; i >= a; i--)
#define pinf 1e18
#define ninf -1e18
int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
string yon[] = {"NO", "YES"};
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using muloset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 100005;
const int mod = 1000000007;

template <class T>
void scan(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
}
template <class T>
void print(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int32_t main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vi v(n);
        map<int, int> p;
        ffor(i, 0, n)
        {
            cin >> v[i];
            p[v[i]]++;
        }
        if (n == 1)
        {
            cout << "-1\n";
        }
        else if (Size(p) == 1)
        {
            if (p.begin()->ff == n - 1)
                cout << "0\n";
            else if (p.begin()->ff == 0)
                cout << n << "\n";
            else
                cout << "-1\n";
        }
        else if (Size(p) == 2)
        {
            auto it = p.begin(), st = p.begin();
            st++;
            if (it->ff + 1 == it->ss && st->ff == it->ss && st->ff + st->ss == n)
                cout << st->ss << "\n";
            else
                cout << "-1\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}