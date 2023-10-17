
#include<iostream>
using namespace std;

void Sumof2Drow(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
          sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void Sumof2Dcol(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
          sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void Sumofdiagonal(int arr[][3],int row,int col){
    int sum = 0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
    }
    cout<<sum<<endl;
}

void Sumofantidiagonal(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=2;j>=0;j--){
            sum=sum+arr[i][j];
        }
        cout<<sum;
    }
}

int main(){
    int arr[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int row=3;
    int col=3;

   Sumof2Drow(arr,row,col);
   cout<<endl;
   Sumof2Dcol(arr,row,col);
   cout<<endl;
   Sumofdiagonal(arr,row,col);
   cout<<endl;
   Sumofantidiagonal(arr,row,col);
}