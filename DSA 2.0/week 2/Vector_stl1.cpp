#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    cout<<"Printing vector:"<<endl;
    int size = v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
}

int main(){
 //in vector dont tell size of vector
 //just keep inserting it will manage the allocation

 vector<int>v; //array hi hai
int n;
cin>>n;

for(int i=0;i<n;i++){
    int d; cin>>d;
    v.push_back(d);
    cout<<"Capacity:"<<v.capacity()<<" Size: "<<v.size()<<endl;

}
 //insert
//  v.push_back(1);
//  v.push_back(2);
//  v.push_back(3);
//  v.push_back(4);
//  v.push_back(5);

 print(v);

 cout<<"After inserting 70:"<<endl;;
 v.push_back(70);
 print(v);

 v.clear();
 print(v);
}