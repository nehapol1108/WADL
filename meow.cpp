#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
#define REP(i, x, y) for (int i = x; i < y; i++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;
void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    vector<pair<int, int>> v;
    unordered_map<int, int> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        m[a] = i;
    }
    int ans = 0;
    for (auto i : arr)
    {
        int t = k - i;
        int u = i - k;
        if (m.find(t) != m.end() and m[i] < m[t])
        {
            v.push_back({m[i], m[t]});
        }
        else if (m.find(u) != m.end() and m[i] < m[u])
        {
            v.push_back({m[i], m[u]});
        }
    }
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}