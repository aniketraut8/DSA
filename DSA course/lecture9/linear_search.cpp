#include<iostream>
using namespace std;

bool linear_search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }else{
            return false;
        }
    }

}



void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i] << " ";
    }
}


int main(){

    int size,i;
    cin>>size;

    int arr[size];
    for ( i = 0; i < size; i++)
    {
        /* code */
        cout<<"enter elements of array"<<endl;
       cin>>arr[i];
         cout<<endl;
    }
    

    cout<<"Elements of the Arrays are>> ";
    display(arr,size);
    cout<<endl;

   cout<<"Enter the key to be searched  "<<endl;
    int key;
    cin>>key;

    bool found = linear_search(arr,size,key);

    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is not present";
    }

    return 0;
}