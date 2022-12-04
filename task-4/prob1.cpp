#include <bits/stdc++.h>
using ll = long long;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)
#define endl '\n'
#define Endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define all(v) v.begin(), v.end()

ll mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n] ,f[100] = {0};
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        f[i]++;
    }
    for(int i = 0; i < k;i++)
    {
        int G = 0 , index = 0;
        for(int j = 0; j < n; j++)
        {
            if(f[a[j]] > G)
            {
                G = f[a[j]];
                index = a[j];
            }
        }
            cout << index << " ";
            f[index] = 0;
    }
}
int main()
{
    // fast;
    int n = 1;
    // cin >> n;
    while (n--)
    {
        solve();
    }
}
