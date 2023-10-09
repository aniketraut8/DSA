#include<iostream>
using namespace std;

void sort01by_two_ptr_appro(int arr[],int n){
    int low=0;
    int high=n-1;
  
   while(low<high){
    //step A: increment low if value is 0
    while(arr[low]==0  && low<high){
        low++;
    }
   //step B: decrement high if value is 1
     while(arr[high]==1  && low<high){
        high--;
    }
    //step C: if low ptr is on 1 and high ptr is on 0 then swap
       swap(arr[low],arr[high]);
       low++;
       high--;
   }
}

int main(){
int arr[]={0,0,1,1,0,1,0,1,1,0};
int n=10;

 sort01by_two_ptr_appro(arr,n);

 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}