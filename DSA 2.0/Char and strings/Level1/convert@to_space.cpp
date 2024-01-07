#include<iostream>
#include<string.h>
using namespace std;

void convertCharacter(char ch[],int len){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
        i++;
    }
}


int main(){
char ch[100];
cin>>ch;

int len=strlen(ch);
convertCharacter(ch,len);
cout<<ch<<endl;
}