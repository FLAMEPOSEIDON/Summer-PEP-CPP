#include<iostream>
using namespace std;

class ok
{
    public:
    int func(int a)
    {
        cout<<"hi"<<endl;
    }

    float func(float a)
    {
        cout<<a<<endl;
    }
};
int main()
{
    ok k;
    // k.func(4);
    k.func(2.2);
 return 0;
}