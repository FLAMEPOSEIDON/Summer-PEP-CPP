
//Hiererchial Inheritence
//if derived class have the object of same method then it will not use the method of Base class
//it will use its own method
#include <iostream>
using namespace std;
class Base
{
    public:
    void print()
    {
        cout<<"From Base"<<endl;
    }

};

class Derived : public Base{
    public:
    void print()
    {
        cout<<"From Derived"<<endl;
    }
};

int main()
{
    Derived d1;
    // d1.print();
    //d1.Base::print(); //by default it wil check its own method 

    //same using pointers
    Base *ptr = &d1;
    ptr->print();
    
}