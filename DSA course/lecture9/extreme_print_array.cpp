#include<iostream>
using namespace std;



void extremePrint(int arr[],int size){
    // int i;
 int start=0;
 int end=size-1;

 while(start<=end){
    cout<<arr[start]<<" ";
   
    cout<<arr[end]<<" ";
    start++;
    end--;
 }
}

//  void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//  }


int main(){
    int i;
    int arr[6]={1,2,3,4,5,6};

    cout<<"Printing the Extreme Array  "<<endl;
    extremePrint(arr,6);
    // printArray(arr,6);

    return 0;
    
}