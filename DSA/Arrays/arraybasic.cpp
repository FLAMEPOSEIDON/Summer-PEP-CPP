#include<iostream>
using namespace std;


//Function to print arrays
void printarr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}



int main()
{
    int arr[5];

    //user input
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    
    //printing elements
    for(int item : arr)
    {
        cout<<item<<" ";
    }

    //printing through function
    printarr(arr,5);

    
}