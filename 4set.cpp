#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,5,2,1,5};
    set<int>st;
    for(int i=0;i<5;i++)
    {
        st.insert(arr[i]);
    }
    for(auto z:st)
    {
        cout<<z<<" ";
    }// st->{1 2 5 }
    cout<<endl;
    
    //erase functionallity
    st.erase(st.begin());
     for(auto z:st)
    {
        cout<<z<<" ";
    }// st->{ 2 5 }
    cout<<" //"<<endl;

// inserting 8 in set
    st.insert(8);
    for(auto z:st)
    {
        cout<<z<<" ";
    }
    cout<<endl;
    // st.erase(startIterator,endIterator)
    st.erase(st.begin(), next(st.begin(), 2)); 
    for(auto z:st)
    {
        cout<<z<<" ";
    }
    cout<<endl;


    st.insert(1);
    st.insert(2);
    st.insert(5);
    for(auto z:st)
    {
        cout<<z<<" ";
    }
    // st.erase(key)//delete the 5
    st.erase(5);
    cout<<endl;
    for(auto z:st)
    {
        cout<<z<<" ";
    }
    cout<<endl;


    auto it=st.find(8);//it will iterate to 7
    auto i=st.find(9);//it=st.end();

    st.emplace(0);//more faster than insert
    cout<<st.size()<<endl;

    for(auto z:st)
    {
        cout<<z<<" ";
    }
    cout<<endl;



    // Unordered set
    unordered_set<int>st1;
    st1.insert(1);
    st1.insert(6);
    st1.insert(2);
    for(auto z:st1)
    {
        cout<<z<<" ";
    }
    // average time complexity is O(1)
    // always perfer unordered set
    // if tle->switch to set
    // worst case is linear in nature O(set size)



}