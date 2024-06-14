#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    double salary;
    int experience;
    string companyname;

    //Constructors : It is a specia member function that is called automatically when an object is created.
    //It will have no return type
    Employee()//Default constructor
    {
        name = "Chandan";
        salary = 100000000;
    }
    void print()
    {
        cout<<"Salary of "<<name<<" is $:"<<salary<<endl;
        cout<<"Experience of "<<name<<" in years:"<<experience<<endl;
    }
};
int main()
{
    Employee emp1;
    // emp1.name = "Chandan";
    // emp1.salary = 100000.00;
    emp1.experience = 2;
    emp1.print();

}