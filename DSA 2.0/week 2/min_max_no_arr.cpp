#include<iostream>
#include<limits.h>
using namespace std;

int findMinimumInArray(int arr[],int size){
    //ans store variable
   int minAns = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int findMaximumInArray(int arr[],int size){
    int maxAns = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}



int main(){
    int arr[]={10,8,31,4,3,1,51};
    int size=7;

    int minimum = findMinimumInArray(arr,size);
    cout<<"Minimum number is:"<<minimum<<endl;

    int maximum = findMaximumInArray(arr,size);
    cout<<"Maximum number is:"<<maximum<<endl;
}