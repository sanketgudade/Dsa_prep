#include<iostream>
using namespace std;


// int factorial(int num){

//    int fact=1;
//     for(int i=1;i<=num;i++){
     
//        fact=fact*i;
//     }
//     return fact;
// }



int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
   return num*fact(num-1);
}

int main(){

int num=5;
cout<<fact(num);
    return 0;
}