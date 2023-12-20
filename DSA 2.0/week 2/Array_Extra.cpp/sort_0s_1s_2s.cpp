#include<iostream>
using namespace std;


int sortArray(int arr[],int size){

  int index=0;
  int left =0;
  int right = size-1;

    while(index<=right){

        if(arr[index]==0){
            swap(arr[index],arr[left]);
            left++;
            index++;
        }

       else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
            //index++;  yaha mujhe index ++ nhi krna recheck krna padega
        }

        else{    // arr[index]==1 simply incrse index 
            index++;
        }


    }
}

int main(){
    int arr[]={1,0,2,2,1,0,1,0};
    int size=8;

    sortArray(arr,size);

    cout<<"Sorted Array will be : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}