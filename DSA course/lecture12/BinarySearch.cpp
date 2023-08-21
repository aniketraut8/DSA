#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }

        //go to right part
        else if(key>arr[mid]){
            start = mid+1;
        }
        //go to left part

        else{ // (key<arr[mid])
            end = mid-1;
        } 

        mid = start + (end - start)/2;

    }
    return -1;
}

int main(){

int even[6]={3,4,7,8,21,34};
int odd[5]={2,3,4,11,45};

int evenIndex = binarySearch(even,6,7);
cout<<"Index of 7 is:"<<evenIndex<<endl;

int oddIndex = binarySearch(odd,5,45);
cout<<"Index of 45 is:"<<oddIndex<<endl;

return 0;

}