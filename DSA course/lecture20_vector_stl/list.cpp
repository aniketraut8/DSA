#include<iostream>
#include<list>
using namespace std;

int main(){

list<int>l;

list<int>n(5,56);
cout<<"Printing n"<<endl;
 for(int i:n){
    cout<<i<<" ";
  }cout<<endl;

l.push_back(1);
l.push_front(2);

cout<<"before erase:"<<endl;
 for(int i:l){
    cout<<i<<" ";
  }cout<<endl;

  l.erase(l.begin());
  cout<<"after erase"<<endl;
   for(int i:l){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Size of the list "<<l.size()<<endl;

}