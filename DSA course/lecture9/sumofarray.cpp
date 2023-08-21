# include <iostream>
using namespace std;

int sumofArray(int num[],int n){
   int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + num[i];
        
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of Array:"<<endl;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cout<<"Enter number of arrays:"<<endl;
        cin>>num[i];
    }
    cout<<"The Sum of the Array is:"<<sumofArray(num,size)<<endl;
    return 0;
}