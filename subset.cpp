#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, int tar, int idx, int sum, string ans)
{
    if (idx >= v.size())
        return;

    if (sum == tar)
    {
        cout << ans << " ";
        return;
    }
    solve(v, tar, idx + 1, sum + v[idx], ans + to_string(v[idx]) + " ");
    solve(v, tar, idx + 1, sum, ans + "");
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tar;
        cin >> n >> tar;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int sum = 0;
        int idx = 0;
        string ans = "";
        solve(v, tar, idx, sum, ans);
    }
}