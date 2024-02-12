#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    while (t--)
    {
        int n, start, end;
        string str;
        cin >> n >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'B')
            {
                start = i + 1;
                break;
            }
        }
        for (int i = str.length() - 1; i > 0; i--)
        {
            if (str[i] == 'B')
            {
                end = i + 1;
                break;
            }
        }
        cout >> end - start >> endl;
    }
}