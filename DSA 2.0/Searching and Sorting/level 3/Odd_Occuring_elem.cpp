#include<iostream>
using namespace std;

//
int findOddOccurringElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        //single element
        if(s==e){
            return s;
        }
        //mid check even or odd
        if(mid & 1){
            if(mid-1>=0 && arr[mid-1]==arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        else{
            if(mid+1<n && arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                //ya to mai right pe khada hu nhi to ans ke upr khada hu
                e=mid;
            }
            mid=s+(e-s)/2;

        }
        
    }
    return -1;
}

int main(){
    int arr[]={10,20,2,2,3,3,5,5,6,6,5,7,7};
    int n=13;

    int ansIndex = findOddOccurringElement(arr,n);

    cout<<"Final Ans is:"<<arr[ansIndex]<<endl;
}