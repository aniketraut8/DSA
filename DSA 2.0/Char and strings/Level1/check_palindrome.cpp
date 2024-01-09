#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[],int len){
    int i=0;
    int j=len-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
        // yaha pohoch gye to saare characters match hogaye
        return true;
    }
}

int main(){
    char ch[100];
    cin>>ch;
    int len=strlen(ch);

    bool isPalindrome=checkPalindrome(ch,len);

    if(isPalindrome){
        cout<<"Valid Palindrome"<<endl;
    }
    else cout<<"Invalid Palindrome"<<endl;
}