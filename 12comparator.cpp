#include <bits/stdc++.h>
using namespace std;
bool comp(int el1, int el2)
{
    if (el1 <= el2)
    {
        return true;
    }
    return false;
}

// i want to sort this is in such way
// that the element who have first elements in the pair
// appears first ,and if first is equal then sort according to
// second and keep the lager second
// after sorting------>{{1,4}{5,9}{5,2}}
bool comp1(pair<int, int> el1, pair<int, int> el2)
{
    if (el1.first < el2.first)
        return true;

    else if (el1.first == el2.first)
    {
        if (el1.second > el2.second)
            return true;
    }
    else
        return false;
}
int main()
{

    // decending order
    int arr[] = {3, 2, 5, 3, 1, 6};
    int n = 6;
    sort(arr, arr + n, greater<int>());
    for (auto it : arr)
    {
        cout << it << " ";
    }

    cout << endl;

    // if the question of pair
    pair<int, int> arr1[] = {{1, 4}, {5, 2}, {5, 9}};
    sort(arr1, arr1 + n, greater<pair<int, int>>());

    for (auto it : arr1)
    {
        cout << it.first << " " << it.second << endl;
    }
}