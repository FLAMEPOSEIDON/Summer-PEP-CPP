//Vectors
//vector can change the size during run time
//vectors are dynamic
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1,2,3,4};
    vector<int>::iterator itr;
    itr = vector1.end() - 1;
    // vector1.push_back(19);

    //access 2 methods
    // cout<<vector1[10]<<endl; //10th value doesn't exist so it will give garbage value
    // cout<<vector1.at(10)<<endl; //it will give error instead 
    
    //add
    // vector1.at(4)=20;
    // cout<<vector1.at(4)<<endl;

    //delete elements
    vector1.pop_back();

    for(int item : vector1)
    {
        cout<<item<<" ";
    }
     cout<<endl;
    for (itr=vector1.begin();itr !=vector1.end(); itr++)
    {
        cout<<*itr<<" ";
    }

}