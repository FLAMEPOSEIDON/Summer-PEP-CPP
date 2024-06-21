//LinerSearch

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for(int i = 0; i<=size; i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
 int arr[5] = {3,2,4,5,7};
 bool ans = linearSearch(arr,5,8);
 if(ans)
 {
    cout<<"Key found";
 }
 else
 {
    cout<<"Key not found";
 }
}