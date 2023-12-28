#include<iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int>& arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){

        if(s==e){
            return s;
        }
        if(mid+1<n  &&  arr[mid]>arr[mid+1])
        return mid;

        else if(mid-1 >=0 && arr[mid]<arr[mid-1])
        return mid-1;

        else if(arr[s]>arr[mid])
        e=mid-1;

        else
        s=mid+1;

        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
  vector<int>arr={12,14,16,18,4,6,8,10};
  int pivotIndex=findPivotIndex(arr);
  cout<<"Pivot Index Is: "<<pivotIndex<<endl;
}