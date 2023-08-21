#include<iostream> 
using namespace std;

int firstOcc(int arr[],int n,int k){

int start = 0;
int end = n-1;

int mid = start + (end-start)/2;
int ans = -1;
while(start <= end){
    if (arr[mid]== k){
        ans = mid;  // mid is stored in ans
        end = mid - 1;   // Going to leftmost occurence
    }

    else if(k > arr[mid]){
        start = mid + 1;
    }

    else{
        end = mid - 1;
    }
    mid = start + (end-start)/2;
   }
   return ans;
}


int lastOcc(int arr[],int n,int k){

int start = 0;
int end = n-1;

int mid = start + (end-start)/2;
int ans = -1;
while(start <= end){
    if (arr[mid]== k){
        ans = mid;  // mid is stored in ans
        start = mid + 1 ;   // Going to rightmost occurence
    }

    else if(k > arr[mid]){
        start = mid + 1;
    }

    else{
        end = mid - 1;
    }
    mid = start + (end-start)/2;
   }
   return ans;
}


int main(){

    int arr1[7]={1,2,3,3,3,3,5};
    cout<<"First Occurence of 3 at index :"<<firstOcc(arr1,7,3)<<endl; 
    cout<<"Last Occurence of 3 at index :"<<lastOcc(arr1,7,3)<<endl; 

    int Occ = 0;
    Occ = (lastOcc(arr1,7,3) - firstOcc(arr1,7,3)) + 1;   //Total no of Occurrences of key
    cout<<"Total no of Occurrences of 3 is :"<<Occ<<endl;
     return 0;
}