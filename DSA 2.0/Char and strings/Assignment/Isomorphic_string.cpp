#include<iostream>
#include<vector>
#include<string.h>
// #include<bits/stdc++.h>
using namespace std;

void createmapping(string &str){
    char start='a';
    char mapping[256]={0};
    for(auto ch:str){
        if(mapping[ch==0]){
            mapping[ch]=start;
            start++;
        }
    }

    for(int i=0;i<str.length();i++){
        char ch =str[i];
        str[i]=mapping[ch];
    }
}

bool isIsomorphic(string s, string t){
    createmapping(s);
    createmapping(t);

    if(s!=t){
        return false;
    }
return true;
}


int main(){
 string s;
 cin>>s;
 cout<<endl;
 string t;
 cin>>t;
 cout<<endl;

bool ans =isIsomorphic(s,t);
 cout<<"Ans:"<<ans;
 cout<<endl;
}