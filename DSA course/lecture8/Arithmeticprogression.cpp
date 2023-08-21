#include <iostream>

using namespace std;

int arithmetic(int n){
    int p;
    p=((3*n)+7);
    return p;
}

int main()
{
   int n;
   cout<<"Enter value of n"<<endl;
   cin>>n;
   
   cout<<"Answer is:"<<arithmetic(n)<<endl;

    return 0;
}