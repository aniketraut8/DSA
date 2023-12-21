#include<iostream>
using namespace std;

void rotate(int nums[],int n,int k){

  int ans[n];
    for(int index=0;index<n;index++){
        int newIndex=(index+k)%n;
        ans[newIndex]=nums[index];
    }
     nums=ans;

     cout<<"Rotated Array is :"<<endl;
  for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
  }
}


int main(){
  int nums[]={10,20,30,40,50,60};
  int n=sizeof(nums)/sizeof(int);

  int k;
  cin>>k;

  rotate(nums,n,k);
  

}