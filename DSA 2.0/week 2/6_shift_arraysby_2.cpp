#include<iostream>
using namespace std;

int rightShiftArrayby2(int arr[],int n){
    
    //step A:make 2 temp variables for last two digits
    int temp[2] = {arr[n-2],arr[n-1]};

  //step B: apply algorithm from n-1 to 2;
    for(int i=n-1;i>=2;i--){
      arr[i]=arr[i-2];
    }
    
    //step C: store values of temp in first and second position
    arr[0]=temp[0];
    arr[1]=temp[1];
    
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n = 9;

    rightShiftArrayby2(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}