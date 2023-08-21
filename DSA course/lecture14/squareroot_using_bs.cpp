#include<iostream>
using namespace std;


    long long int binarySearch(int n){

        int s = 0;
        int e = n;   //we considered the arr from 0 to at last value of n that is squarert of element we have to find

    long long int mid = s + (e - s)/2;

    long long int ans = -1;

    while(s<=e){
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{    // square > n ;
            e = mid - 1;
        }
       mid = s + (e - s)/2;
      }
      return ans;
    }


int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    cout<<"The Square root of number "<<binarySearch(n)<<endl;

    return 0;
   
}