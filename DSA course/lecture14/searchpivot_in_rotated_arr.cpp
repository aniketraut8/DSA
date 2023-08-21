#include<iostream>
using namespace std;

int getPivot(int arr[],int n){   //vector<int>& arr == int arr[];
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{  // (arr[mid])< arr[0])
            end = mid;
        }
         mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid]==key){
        return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
         mid = start + (end - start)/2;
    }
    return -1;
}

int findPosition(int arr[],int n,int key){

    int pivot = getPivot(arr,n);

    if(key >= arr[pivot] && key <= n-1){
        //BS on second line
        return binarySearch(arr,pivot,n-1,key);
    }
    else{
        //BS on second line 
        return binarySearch(arr,0,pivot-1,key);
    }
    return 0;
}

int main(){
    int arr[5]={12,15,18,2,4};
    cout<<"The position of k is :"<<findPosition(arr,5,2)<<endl;

    return 0;
}