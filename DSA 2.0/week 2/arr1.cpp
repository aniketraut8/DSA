#include<iostream>
using namespace std;

int main(){
    //int arr[10];
   // cout<<"Base add of Arr is:"<<&arr<<endl;
   // cout<<"Size address of Arr is:"<<sizeof(arr)<<endl;
    
    // int arr[]={2,3,4,56,3,7,8,};
    // int brr[5]={1,2,3,4,5};
    // int crr[5]={2,3};  
    // int drr[2]={1,2,3,4,5}; //error
    
    //taking input in an arr
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of index:"<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }

    //printing in an arr
    cout<<"Printing the arr"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}