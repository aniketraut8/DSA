#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string>q;

    q.push("Aniket");
    q.push("Bhai");
    q.push("Raut");

    cout<<"Size before Pop  "<<q.size()<<endl;

    cout<<"first string  "<<q.front()<<endl;
    q.pop();
    cout<<"first string "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;
}