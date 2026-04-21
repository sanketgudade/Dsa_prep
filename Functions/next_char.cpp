#include<iostream>
using namespace std;


int main(){
char ch;

cout<<"Enter a english character"<<endl;
cin>>ch;
char nextChar = char(ch + 1);
cout<<"next character is" <<nextChar;
    return 0;
}