#include<bits/stdc++.h>
using namespace std;
array<int ,3>arr;//{0,0,0}//global me zero honge

array<int ,3>arr1={1};//{1,0,0}

array<int ,3>arr2;

 // max size of 10^7->int,char,double
// max size of 10^8->bool
int main()
{
    // max size of 10^6->int ,double,char
    // max size of 10^7->bool
    arr2.fill(10);//{10,10,10}
    array<int ,3>arr;//garbage value
    for(int i=0;i<3;i++)
    {
        cout<<arr2.at(i)<<" ";
    }
    cout<<endl;


    // iterator
    // begin() ,end(),rbegin(),rend()
    array<int ,5>arr3={1,2,3,4,5};
    for(auto it=arr3.begin();it!=arr3.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr3.rbegin();it!=arr3.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:arr3)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    string s="soul no gym";
    for(auto c:s)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    // size
    cout<<arr3.size()<<endl;
    // front
    cout<<arr3.front()<<endl;
    // back
    cout<<arr3.back()<<endl;
}