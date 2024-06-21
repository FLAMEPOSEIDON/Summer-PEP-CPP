//Set Properties
//1. Unique elements = no two element can be equal
//2. immuatable = we can add or remove elements from a set, but we can not change the values of 
///existing element
//3. sorted order = by default the order is ascending

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> set1 = {5,7,8,2,0,3};
    set<int, greater<int>> set2 = {5,7,8,2,0,3}; //for descending

    set1.insert(20);
    set1.erase(8);
    // set1.clear();
    // cout<<"Ascending: "<<endl;
    for (int i : set1)
    { 
        cout<<i<<" ";
    }
    // cout<<endl;

    // cout<<"Descending: "<<endl;
    // for (int i : set2)
    // {
    //     cout<<i<<" ";
    // }

 

}