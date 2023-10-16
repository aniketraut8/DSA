#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    int row=3;
    int col = 3;

//taking input in an 2D array;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the input for row index: "<<i<<" Col index: "<<j<<endl;
            cin>>arr[i][j];
        }
    }
}