#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Pair Class
    pair<int, int> pr = {1, 2};
    pair<pair<int, int>, int> pr1 = {{1, 2}, 3};
    cout << pr1.first.second << endl;
    cout << pr1.second << endl;
    // 2 pair class
    pair<pair<int, int>, pair<int, int>> pr2 = {{1, 2}, {3, 4}};
    cout << pr2.first.first << " " << pr2.first.second << endl;
    cout << pr2.second.first << " " << pr2.second.second << endl;

    // pair is single //it is not container
    // it can be defined data type
    vector<pair<int, int>> vec;
    set<pair<int, int>> st;
    map<pair<int, int>, int> mp; // Sorted and unique keys
    multimap<string, int> mpp;   // Sorted and Multiple Keys

    // unordered map<pair--->> it NOT work//Unsorted and Unique keys
}