#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    string sentence;
    for (int i = 0; i < n; i++)
    {
        getline(cin, sentence);
        // cout << sentence << endl;

        map<string, int> mp;

        queue<pair<string, int>> q;

        string word;
        stringstream ss(sentence);

        int maximum_count = -1;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maximum_count)
                maximum_count = mp[word];

            q.push({word, mp[word]});
            // cout << word << endl;
        }
        // cout << endl;

        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }
        // cout << endl;

        while (!q.empty())
        {
            pair<string, int> pr = q.front();
            q.pop();
            if (pr.second == maximum_count)
            {
                cout << pr.first << " " << pr.second << endl;
                break;
            }
        }
        // cout << endl;
        // cout << "Max Count = " << maximum_count << endl
        //      << endl
        //      << endl;
    }

    return 0;
}