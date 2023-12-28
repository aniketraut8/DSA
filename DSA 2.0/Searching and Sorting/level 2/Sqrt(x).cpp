#include<iostream>
#include<vector>
using namespace std;

int mySqrt(int &x){
    int s=0;
    int e=x;
    long long int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}

int main(){
    int n;
    cin>>n;
    
    cout<<"Sqrt of x to nearby integer is:"<<mySqrt(n)<<endl;
    return 0;
}