#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
double sum(double b,double c){
    return b+c;
}
int main(){

cout<<sum(2,2);
cout<<sum(5.1,6.3);

    return 0;
}