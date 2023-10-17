#include<iostream>
#include<limits.h>
using namespace std;

bool findTarget(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
          }
    }
    return false;
}

int findMin(int arr[][3],int row,int col){
    int minAns = INT_MAX;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minAns){
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

int findMax(int arr[][3],int row,int col){
    int maxAns = INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}



int main(){
    int arr[3][3]={
        {12,3,2},
        {23,34,11},
        {1,8,5}
    };
    int row=3;
    int col=3;
    int target=34;

    cout<<"Found or Not:"<<findTarget(arr,row,col,target)<<endl;

   cout<<"Maximum Element is:"<<findMax(arr,row,col)<<endl;
   cout<<"Minimum Element is:"<<findMin(arr,row,col)<<endl;
}