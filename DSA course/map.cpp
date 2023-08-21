#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;

    m[1]="aniket";
    m[22]="anjali";
    m[2]="aashutosh";
    m[3]="arjun";

    m.insert({5,"aadi"});
   

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;

    cout<<"Finding 22>>"<<m.count(22)<<endl;
cout<<endl;

m.erase(22);
cout<<"after erase"<<endl;
 for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;

    auto it = m.find(2);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}
    

