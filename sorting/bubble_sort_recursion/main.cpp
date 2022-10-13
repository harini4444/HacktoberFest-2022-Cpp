// C++ program to implement Bubble Sort using recursion
#include <iostream>
using namespace std;
 

void bubbleSort_recursive(int arr[],int n)
{  
    if (n == 1)
        return;
 
    for (int i=0; i<=n-2; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
 
    bubbleSort_recursive(arr, n-1);
}

void printArray(int arr[], int n) // function to print elements of the array
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver Code
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   bubbleSort_recursive(arr,size);
   printArray(arr, size);
   return 0;
}
