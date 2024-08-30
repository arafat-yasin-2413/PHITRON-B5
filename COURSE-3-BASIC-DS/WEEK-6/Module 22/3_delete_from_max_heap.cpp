#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;

        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
            cur_idx = parent_idx;
        }
        else
        {
            break;
        }
    }
}

void delete_from_max_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;
    while (true)
    {
        int left_index = cur * 2 + 1;
        int right_index = cur * 2 + 2;
        int last_index = v.size() - 1;

        // duitai ache
        if (left_index <= last_index and right_index <= last_index)
        {
            // amar left, right er moddhe konta max?
            // jodi left boro hoy and amar left amar cheye boro  hoy
            if (v[left_index] >= v[right_index] and v[left_index] > v[cur])
            {
                swap(v[left_index], v[cur]);
                cur = left_index;
            }
            // jodi right boro hoy and amar right amar cheye boro hoy
            else if (v[right_index >= v[left_index] and v[right_index] > v[cur]])
            {
                swap(v[right_index], v[cur]);
                cur = right_index;
            }

            else
            {
                break;
            }
        }
        // left ache
        else if (left_index <= last_index)
        {
            if (v[left_index] > v[cur])
            {
                swap(v[left_index], v[cur]);
                cur = left_index;
            }
            else
            {
                break;
            }
        }
        // right ache
        else if (right_index <= last_index)
        {
            if (v[right_index] > v[cur])
            {
                swap(v[right_index], v[cur]);
                cur = right_index;
            }
            else
            {
                break;
            }
        }
        // left o nai, right o nai.. tai break kortesi
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> v)
{
    for (int element : v)
        cout << element << " ";
    cout << endl;
}

int main()
{
    // 30 20 25 15 5 6 3

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);
    delete_from_max_heap(v);
    print_heap(v);

    return 0;
}