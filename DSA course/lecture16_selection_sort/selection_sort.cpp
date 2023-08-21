
#include<iostream>
using namespace std;

int print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int selectionSort(int arr[],int n)
{
    for (int i=0 ; i<n-1 ; i++){
        int minIndex = i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
    
        swap(arr[minIndex],arr[i]);
        }
    }
}



int main(){
   int arr[4]={45,20,81,40};
   int i,j,n;
  n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    cout<<"Sorted Array is:"<<print(arr,4);
    cout<<endl;

    return 0;
}

