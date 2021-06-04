#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        string ans = "";
        int max_len = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                char ch = str[j];
                if (islower(ch) && str[j - 1] == isupper(ch))
                {
                    int len = j - i + 1;
                    if (len > max_len)
                    {
                        ans = str.substr(i, len);
                        max_len = len;
                    }
                }
                else
                    break;

                if (isupper(ch) && str[j - 1] == islower(ch))
                {
                    int len = j - i + 1;
                    if (len > max_len)
                    {
                        ans = str.substr(i, len);
                        max_len = len;
                    }
                }
                else
                    break;
            }
        }
        cout << ans << endl;
    }
}