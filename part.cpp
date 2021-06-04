#include <bits/stdc++.h>
using namespace std;

void solve(string str, unordered_set<string> st, string ans)
{

    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        string left = str.substr(0, i + 1);
        if (st.find(left) != st.end())
        {
            string right = str.substr(i + 1);
            solve(right, st, ans + left + " ");
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        unordered_set<string> st;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            st.insert(temp);
        }
        string ans = "";
        solve(str, st, ans);
    }
}