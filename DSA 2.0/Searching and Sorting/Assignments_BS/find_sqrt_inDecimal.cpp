#include<iostream>
using namespace std;

int mySqrt(int n){
    int s=0,e=n;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(mid*mid <= n){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
}


double myPrecisionSqrt(int n){
     double sqrt=mySqrt(n);    //call above function
     
     double step=0.1;
     int precision=10;

     for(int i=0;i<precision;i++){
        double j=sqrt;

        while(j*j<=n){
            sqrt=j;
            j += step;
        }
        step = step/10;
     }
     return sqrt;

}


int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    double Sqrt=myPrecisionSqrt(n);

    // cout<<"SQRT:"<<Sqrt<<endl;  
    //we cannot use cout bcoz it can output untill only five decimal precision
    printf("%0.10f",Sqrt);
    return 0;

}