#include<iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int ans;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double precisionQuotient(int divisor,int dividend){
    double quotient = getQuotient(divisor,dividend);
    double step = 0.1;
    int precision = 3;

    for(int i=0;i<precision;i++){
        double j = quotient;
        while(j*divisor <= dividend){
            quotient=j;
            j += step;
        }
        step=step /10;
    }
    return quotient;
}


int main(){
    int divisor = 3;
    int dividend= -20;

    double ans = precisionQuotient(abs(divisor),abs(dividend));

    if((divisor>0 && dividend<0)||(divisor<0 && dividend>0)){
        ans=0-ans;
    }
    cout<<"Final Ans is:"<<ans<<endl;

    return 0;
}