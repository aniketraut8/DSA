#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(int nums[],int n){
    int i=1,j=0;

    while(i<n){
        if(nums[i]==nums[j]){
            i++;
        }
        else{
            j++;
            nums[j]=nums[i];
            i++;
        }

    }
    for(int index=0;index<n;index++){
        cout<<nums[index]<<" ";
    }    
    cout<<endl;

    cout<<"The unique elements in an array are (k):"<<endl;
    cout<<j+1;
}



int main(){
    int nums[]={0,0,2,2,2,3,3,4,5,5,6,9};
    int n=sizeof(nums)/sizeof(int);
    removeDuplicates(nums,n);
    return 0;

}