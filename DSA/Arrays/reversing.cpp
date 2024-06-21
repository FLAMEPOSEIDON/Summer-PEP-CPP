#include<iostream>
using namespace std;

int reverse(int arr[],int size)
{
    int start,end;
    start = 0;
    end = size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main()
{
 int arr[5]={2,3,4,5,6};
 reverse(arr,5);
 //to print the array we have to use one for loop again
 for(int i=0;i<5;i++) 
 {
    cout<<arr[i]<<" ";
 }
}


//swao alternate elements of array
//pair sum
//triplet sum
//sort 0's and 1's
//find duplicate elements
//find unique elements
//find intersection elements