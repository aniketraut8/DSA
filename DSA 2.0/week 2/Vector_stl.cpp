#include<iostream>
using namespace std;

void fun(int arr[],int n){
    cout<<"Array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    //static memory alloc
    //int arr[5]={1,2,3,4,5};
 
   //dynamic memory alloc
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }

 
   fun(arr,n);
}