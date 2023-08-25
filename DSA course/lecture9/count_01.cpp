//count 0's and 1's in an array

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[7]={0,1,0,1,0,1,0};


int count =0; 
int count2=0;
for(int i=0; i<7;i++){
    
    if(arr[i]==0){
        count++;
        
    }
    else if(arr[i]==1){
        count2++;
    }
   
}
 cout<<"Count of 0's in an array is:"<< count<<endl;
 cout<<"Count of 1's in an array is:"<< count2<<endl;
}

