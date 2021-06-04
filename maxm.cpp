#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> vp;
    vector<int> dum;
    for (int i = 0; i < 9; i++)
    {
        int x, y;
        cin >> x >> y;
        dum.push_back(x);
        dum.push_back(y);

        vp.push_back(dum);
        dum.clear();
    }

    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i][0] << " " << vp[i][1] << endl;
    }
}