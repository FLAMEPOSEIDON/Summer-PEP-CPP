#include<iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT8_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<max;

}

int main()
{
    // int arr[5]={3,2,5,6,7};  
    int cm[5];

     //user input
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++)
    {
        cin>>cm[i];
    }

    getMax(cm,5);
}