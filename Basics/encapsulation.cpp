#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    int age;
    char grade;

public:
    void get(string getName, int getRollNumber, int getAge, char getGrade)        
    {
        name = getName;
        rollNumber = getRollNumber;
        age = getAge;
        grade = getGrade;       
    }

    void set(string newName, int newRollNumber, int newAge, char newGrade)
    {
        this->name = newName; 
        //we use this keyword to avoid ambiguity like 
        this->rollNumber = newRollNumber;
        this->age = newAge;
        this->grade = newGrade;        
    }

    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"RollNumber: "<<rollNumber<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl<<endl;
    }
};
int main()
{
 Student s1;
 s1.get("Chandan",12313988,23,'A');
 s1.print();
 s1.set("Neeraj",12311729,23,'B');
 s1.print();
}