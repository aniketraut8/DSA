#include<iostream>
using namespace std;

void rightShiftArray(int arr[],int n){

    //step 1
    int temp = arr[n-1];

    //step 2
    //shift -- arr[i]=arr[i-1]
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }

    //step 3 : copy temp into 0th index
    arr[0]=temp;
}

void leftShiftArray(int arr[],int n){
    int temp = arr[0];

    for(int i=0 ; i<n-1 ; i++){
       arr[i]=arr[i+1];
    }

    arr[n-1]= temp;

    cout<<"Left Shift in an array:";
    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;

    rightShiftArray(arr,n);
   cout<<"Right Shift in an array:";
    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    leftShiftArray(arr,n);

    
   

}