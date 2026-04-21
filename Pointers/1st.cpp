#include<iostream>
using namespace std;

int main(){

int a=10;
int *ptr= &a;
// char ch='A';
// char *char_ptr=&ch;
int **pptr=&ptr;

cout<<&ptr<<"="<<pptr<<endl;

int b=20;

cout<<"Address of b"<<&b << "Value of B is "<<*(&b);
    return 0;
}