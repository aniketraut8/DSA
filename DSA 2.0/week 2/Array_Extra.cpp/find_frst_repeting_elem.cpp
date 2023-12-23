#include<iostream>
#include<unordered_map>

using namespace std;

int fistRepeated(int a[],int n){
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int a[]={1,5,3,4,3,5,6};
    int n=7;

    int b=fistRepeated(a,n);
    cout<<b;

}