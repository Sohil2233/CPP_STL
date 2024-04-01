#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin(),end(),rbegin(),rend()
    // size
    // clear
    // empty
    // at
    // remove-->O(1) operations
    ls.push_front(1);
    ls.push_front(3);
    ls.push_front(4);
    ls.remove(3); //->o(1)operations

    // given N elements ,print the elements that occurs maximum
    // number of times
    // input
    // 5
    // 1 3 3 3 2

    // output
    // 3

    // int n;
    // cin >> n;
    // unordered_map<int, int> mp;
    // int max = 0;
    // //  int ans=0;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     mp[x]++; // O(n*1)
    //     if (mp[x] > mp[max])
    //     {
    //         max = x;
    //     }
    // }
    // cout << max << endl;

    // given N elements ,print the elements in sorted order
    // input
    // n=6
    // 6 6 3 2 3 5

    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    for (auto it : ms)
    {
        cout << it << " ";
    }
}