#include<iostream>
using namespace std;

int findfirstOccurrence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else e=mid-1;

        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[]={10,30,30,30,30,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int target=30;

    cout<<"Element found at index: "<<findfirstOccurrence(arr,n,target);
}