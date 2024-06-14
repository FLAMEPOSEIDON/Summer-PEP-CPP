#include<iostream>
using namespace std;


int main()
{
    int a = 1;
    int *ptr = &a; //& mean address
    int **ptr2 = &ptr; //we have to use 2 * because a pointer is pointing to a pointer

    cout<<a<<endl; //value of a
    cout<<&a<<endl; //address of a
    cout<<ptr<<endl; 
    cout<<*ptr<<endl; 
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;

    //creating NULL pointer
    int *ptr3 = NULL;
    cout<<ptr3<<endl;    

    //creating dangling pointer
    //dangling pointer mean if a pointer pointing a value and that value is deleted 
    //so by default it shows some garbage value but in general we have to point that to NULL pointer

    //void pointer = it can point to any pointer
    //wild pointer = not initialized from the beginning

}
