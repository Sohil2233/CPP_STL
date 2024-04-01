#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int takes 16 bits
    // char takes 68 bits
    // but
    // bitset takes 1 bit
    // only store 0 & 1

    // initilization
    bitset<4> bt;
    cin >> bt;

    // all->true or false
    cout << bt.all() << endl; // if all 1 return true else return false
    // here 0 ->true

    // any
    cout << bt.any() << endl; // if bt any bit is 1 it will true
    // here 1 is true

    // count
    cout << bt.count() << endl; // print the number of set bit

    // flip
    // bt->1111
    // bt.flip(2);//bt->1101
    // cout<<bt<<endl;

    // none
    // if none is set then true,else false
    // bt->1000
    cout << bt.none() << endl; // false
    // bt->0000
    cout << bt.none() << endl; // true

    // set
    bt.set();     // it set all the bits
    bt.set(2);    // set the 2nd index
    bt.set(2, 0); // set 2nd index with zero

    // reset
    bt.reset();  // set all index with 0
    bt.reset(2); // set 2nd index with 0

    // size
    cout << bt.size() << endl; // print 4

    // test
    cout << bt.test(1); // check if the bit is set or not at index 1

    
}