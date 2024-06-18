#include<iostream>
using namespace std;

class Distance
{
    private:
    int metere;

    friend int increaseDistance(Distance); //friend function
    public:
    Distance()
    {
        metere = 0;
    }
};

int increaseDistance(Distance d)
{
    d.metere += 10;
    return d.metere;
}

int main()
{
 Distance d1;
 cout<<increaseDistance(d1);
}