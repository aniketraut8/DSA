#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[],int size){
    int length=0;
    int index=0;
    while(ch[index]!='\0'){
        length++;
        index++;
    }
    return length;
}


int main(){
    char ch[100];
    cin>>ch;

    int len=findLength(ch,100);

    cout<<"Length of String is:"<<len<<endl;
    cout<<"Printing length:"<<strlen(ch)<<endl;
}