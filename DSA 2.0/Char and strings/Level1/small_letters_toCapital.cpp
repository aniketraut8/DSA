#include<iostream>
#include<string.h>
using namespace std;


void convertToUppercase(char ch[],int len){
        int index=0;
        while(ch[index]!='\0'){
            char currCharacter = ch[index];
            //check if lowercase then convert to uppercase
            if(currCharacter>='a' && currCharacter<='z'){
                ch[index]=currCharacter -'a'+'A'; //formula dor conveting lower to higher
            }
            index++;
        }
    }

void convertToLowercase(char ch[],int len){
        int index=0;
        while(ch[index]!='\0'){
            char currCharacter = ch[index];
            //check if lowercase then convert to uppercase
            if(currCharacter>='A' && currCharacter<='Z'){
                ch[index]=currCharacter -'A'+'a'; //formula dor conveting lower to higher
            }
            index++;
        }
    }

int main(){
    char ch[100];
    cin.getline(ch,100);

    int len=strlen(ch);
    convertToUppercase(ch,len);
    cout<<endl<<"Upper case:"<<ch<<endl;
    convertToLowercase(ch,len);
    cout<<endl<<"Lower case:"<<ch<<endl;

}