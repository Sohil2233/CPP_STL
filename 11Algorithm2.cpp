#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
    int n = 11;
    int x = 10;
    //  First occurence
    // 1st way
    if (binary_search(arr, arr + n, x))
    {
        cout << lower_bound(arr, arr + n, x) - arr << endl;
    }
    else
        cout << "does not exists";




    // // 2nd way
    int ind = lower_bound(arr, arr + n, x) - arr;
    if (ind != n && arr[ind] == x)
    {
        cout << "Found at -->" << ind << endl;
    }
    else
        cout << "Not Found " << endl;





    // Find the last Occurence of x=10;ans=7
    // arr[]={1,5,7,7,8,10,10,10,11,11,12}
    //        0 1 2 3 4 5  6  7  8  9  10
    //                        ^
    //
    //
    int ind = upper_bound(arr, arr + n, x) - arr;
    ind -= 1;
    if (ind >= 0 && arr[ind] == x)
    {
        cout << "last occurence--> " << ind << endl;
    }
    else
    {
        cout << "does not exist" << endl;
    }



    // Q3 tell me the number of times the x apperars in array
    // arr[]={1,5,7,7,8,10,10,10,11,11,12}
    //        0 1 2 3 4 5  6  7  8  9  10
    //                  ^     ^
    // upperbound - lowerbound
    int ind = (upper_bound(arr, arr + n, x) - arr) - (lower_bound(arr, arr + n, x) - arr);
    cout << "no of occurence is --> "<< ind << endl;







    // Permutation
    // o(N)
    // string s="abc"
    // all permutation as follows:
    // abc
    // acb
    // bac
    // bca
    // cab
    // cba
    // **all in sorted order

    string s = "abc";
    bool res = next_permutation(s.begin(), s.end());
    // if he go on next permutation next_permutaion return true ,else false
    cout << res << endl;
    s = "cba";
    res = next_permutation(s.begin(), s.end());
    cout << res << endl;



    // if i give u any random strings s=" bca"
    // i want you to print all the permutation
    s = "cba";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));



    // prev prmutation
    s = "bca";
    res = prev_permutation(s.begin(), s.end());
    cout << res << endl;
}