#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;

    // push
    arr.push_back(0);//{0}
    arr.push_back(2);//{0,2}
    cout<<arr.size()<<endl;
    arr.push_back(3);//arr.emplace_back(1);//it is slightly faster than push_back
    cout<<arr.size()<<endl;

    // pop
    arr.pop_back();
    cout<<arr.size()<<endl;

    // erase all elements at once()
    arr.clear();
    cout<<arr.size()<<endl;

    vector<int>vec(4,4);
    cout<<vec.size()<<endl;
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // copy the entire vec1 into vec2
    vector<int>vec1(4,10);
    vector<int>vec2(vec1);
    for(auto i:vec2)
    {
        cout<<i<<" ";
    }

    vector<int>vec3={1,3,2,5};
    vector<int>vec4(vec3.begin(),vec3.begin()+2);

cout<<endl<<endl;
    // lower bound,upperbound
    // swap(v1,v2);
    // begin(),end(),rbegin(),rend();


    // define 2d vectors
    vector<vector<int>>arr1;
    vector<int>raj={10,20};
    vector<int>raj1={1,2};
    vector<int>raj2={11,1,222};
    arr1.push_back(raj);
    arr1.push_back(raj1);
    arr1.push_back(raj2);
    for(auto vctr:arr1)
    {
            for(auto i:vctr)
        {
            cout<<i<<" ";
        }
         cout<<endl;
    }
    // cout<<arr1[2][2];
    
    // define 10*20 
    vector<vector<int>>arr2(6,vector<int>(5,9));
    for(auto vctr:arr2)
    {
            for(auto i:vctr)
        {
            cout<<i<<" ";
        }
         cout<<endl;
    }

    // arrays of vector
    // indexes are dynamic
    vector<int>arr3[4];

    // 3d vector
    vector<vector<vector<int>>>a3d(5,vector<vector<int>>(6,vector<int>(5,8)));

}