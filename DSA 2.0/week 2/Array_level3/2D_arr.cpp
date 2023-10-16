#include<iostream>
using namespace std;

int rowwiseprintArray(int arr[][4],int row,int col){
    for (int i=0 ;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int colwiseprintArray(int arr[][4],int row,int col){
    for(int i=0 ;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int arr[3][4]{
                 {1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}
                  };

    int row = 3;
    int col = 4;
    rowwiseprintArray(arr,row,col);
    cout<<endl;
    colwiseprintArray(arr,row,col);

    return 0;
}
