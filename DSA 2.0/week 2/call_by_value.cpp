#include<iostream>
using namespace std;

//call by value 
int incrementBy1(int n){  //this n is not copy of main n this is another memory block
    n = n+1;
    return n;
} 

int main(){
    int n;
    cin>>n;

    incrementBy1(n);
    cout<< "n:"<<n<<endl;
}