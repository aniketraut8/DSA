#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[6]={2,-1,6,3,55,0};
    int arr2[9]={23,1,4,6,7,9,10,55,34};


   
    reverse(arr,6);
    reverse(arr2,9);

    printArray(arr,6);
    printArray(arr2,9);
}