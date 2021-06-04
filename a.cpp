#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int inp;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> inp;
        v.push_back(inp);
    }
    for (int x : v)
        cout << x << " ";
    cout << endl;
}