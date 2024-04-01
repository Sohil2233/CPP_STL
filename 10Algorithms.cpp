#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Algorithms
    // sorting
    // array , vector
    int arr[5] = {5, 2, 7, 3, 1};
    int n = 5;
    sort(arr, arr + n);     // in increasing order
    sort(arr + 1, arr + 4); // sorting particular numbers form 1 to 3

    // vector
    vector<int> vec = {5, 2, 7, 3, 1};
    sort(vec.begin(), vec.end()); // also in increasing order

    // vec-> {5,2,7,3,1}
    //        0 1 2 3 4
    // sort only index from 1 to 3
    // final vectorv->{5,2,3,7,1}
    sort(vec.begin() + 1, vec.begin() + 4);
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // Reverse the array
    reverse(arr, arr + n);
    // vector
    reverse(vec.begin(), vec.end());
    // reverse particular elements in array
    reverse(arr + 1, arr + 4);
    // reverse particular elements in vector
    reverse(vec.begin() + 1, vec.begin() + 4);

    // find Maximum and Minimum elements
    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
    cout << max << endl;
    cout << min << endl;
    int maxi = *max_element(vec.begin(), vec.end());
    int mini = *min_element(vec.begin(), vec.end());

    // find the sum between the range
    // accumulator(strt,end,initial_sum)
    int sum = accumulate(arr, arr + n, 0);
    cout << sum << endl;
    int sumi = accumulate(vec.begin(), vec.end(), 0);

    // how many times the element 1 occurs in the array
    // count(strt,end,x)
    int cnt = count(arr, arr + n, 1); // it take o(n)
    int cnt1 = count(vec.begin(), vec.end(), 1);

    // first occurance of 2
    auto index = find(arr, arr + n, 2); // return an iterator
    // pointing to the first instance of it or else
    // returning the end() if it is not there

    cout << index << endl; // it gives you memory location
    // it return ->0x61fe98

    cout << index - arr << endl; // it print the index-->1

    // binary search
    // this stl only works on sorted arrays
    // arr[ ]={1,5,6,7,9}
    // x=9
    // true->9 exits in arr
    // x=10
    // false->10 does not exist in arr
    int prr[] = {1, 5, 6, 7, 9};
    bool res = binary_search(prr, prr + n, 9);
    cout << "-------------" << endl;
    cout << res << endl;

    vector<int> vcc = {1, 5, 6, 7, 9};
    bool ser = binary_search(vcc.begin(), vcc.end(), 10);
    cout << ser << endl;
    cout << "-------------" << endl;

    // lower_bound function
    //  return an iterator pointing to
    //  element which is not less than element

    // arr[]={1,5,7,7,8,10,10,10,11,11,12}
    //                  ^
    // x=10
    // arr[]={1,5,7,7,8,10,10,10,11,11,12}
    //            ^
    // x=6
    // arr[]={1,5,7,7,8,10,10,10,11,11,12}
    //                                 ^
    // x=13
    // this works in log N

    int arr1[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
    n = sizeof(arr1) / sizeof(int);

    auto x = lower_bound(arr1, arr1 + n, 9);
    int ind = x - arr1;

    cout << ind << endl;

    // lower_bound function
    //  return an iterator pointing to
    //  element which is "just greater" than element

    // arr[]={1,5,7,7,8,10,10,10,11,11,12}
    //                 ^
    // x=7
    // x=6
    // x=12->end( ) iterator

    auto y = upper_bound(arr1, arr1 + n, 7);
    int indi = y - arr1;
    cout << indi << endl;
}