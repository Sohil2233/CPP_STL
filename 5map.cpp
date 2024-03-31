#include <bits/stdc++.h>
using namespace std;
int main()
{
    // log n is tc of MAP
    // map only store unique keys
    // strings are keys in map

    // key value
    // raj->27
    // soul->22
    // rn->45
    // gshan->7
    // Map Initilization
    map<string, int> mp;
    mp["raj"] = 27;
    mp["soul"] = 22;
    mp["rn"] = 45;
    mp["jishan"] = 7;
    mp["raj"] = 55; // over writing the value

    // printing of map
    for (auto pair : mp)
    {
        cout << pair.first << " : " << pair.second << endl;
    }
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }

    // emplace function
    mp.emplace("aadi", 54);

    // map erase with key
    mp.erase("raj");
    mp.erase(mp.begin());
    mp.erase(mp.begin(), next(mp.begin(), 2));

    mp.emplace("sam", 44);

    // check map empty or not
    cout << mp.empty() << endl;

    // always  retun 1 as it store only 1 instance of raj
    cout << mp.count("sam") << endl;

    // doesnt store in any order
    unordered_map<int, int> mpp;
    // O(1) in almost all cases
    // O(n) in the worst case, where n is the container size
}
