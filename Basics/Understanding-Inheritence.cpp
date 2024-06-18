//Understaning Inheritence
/* It allow us to create a new class(derived/child) from an existing class(base/parent)
the child class inherits the feature from the parent class and can have additional features of its own.*/

#include<iostream>
using namespace std;

class base{
    public:
    int x;
    private:
    int z;
    protected:
    int y;
}
class derived:public base{
    //x is public
    //y is protected
    //z is not accessible
};
class c2 : protected base{
    //x is public
    //y is protected
    //z is not accessible

};
class c3 : private base{
    //x is private
    //y is private
    //z is not accessible
};
int main()
{
    
 return 0;
}

