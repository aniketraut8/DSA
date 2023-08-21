#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;

    s.push("aniket");
    s.push("bhai");
    s.push("raut");

    cout<<"Top Element "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element "<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;
     
}