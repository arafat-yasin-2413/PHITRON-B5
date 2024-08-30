#include <bits/stdc++.h>
using namespace std;

void downHeapify(vector<int> &v, int idx)
{
    while (true)
    {
        // dhori, last parent er index(idx) e holo largest value er index
        int largestIndex = idx;
        // idx er left ebong right ber kori
        int l = idx * 2 + 1;
        int r = idx * 2 + 2;
        int sz = v.size();

        if (l < sz and v[largestIndex] < v[l])
            largestIndex = l;
        if (r < sz and v[largestIndex] < v[r])
            largestIndex = r;

        // jodi uporer kono if er moddhei na dhuke , tahole
        // .. idx ebong largest index ek e jaygay ache
        // .. emon hoilei amra break kore dibo
        if (idx == largestIndex)
            break;

        // onnothay amra idx index er value er sathe
        // ..largest index er value er swap korbo
        swap(v[idx], v[largestIndex]);
        // idx k update korbo .. (nicher dikee pathabo)
        idx = largestIndex;
    }
}

stack<int> extract(vector<int> &v)
{
    stack<int> result;
    int sz = v.size();

    for (int i = 0; i < sz; i++)
    {
        int val = v[0];
        result.push(val);
        v[0] = v[v.size() - 1];
        v.pop_back();
        downHeapify(v, 0);
    }

    return result;
}

void print_heap(vector<int> vec)
{
    for (int element : vec)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};
    print_heap(v);

    int last_non_leaf = (v.size() / 2) - 1;
    cout << "last non leaf = " << last_non_leaf << endl;

    for (int i = last_non_leaf; i >= 0; i--)
    {
        downHeapify(v, i);
    }
    print_heap(v);

    stack<int> receiver = extract(v);
    cout<<"Sorted Array is = ";
    while (!receiver.empty())
    {
        cout<<receiver.top()<<" ";
        receiver.pop();
    }
    cout<<endl;
    

    return 0;
}