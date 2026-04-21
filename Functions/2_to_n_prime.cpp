#include<iostream>
using namespace std;


bool is_prime(int num){
    if(num==1 || num<=0){
        return false;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
        
        
    }
    return true;                 // loop ends and then if it is not false then true means its a prime number
}



int n_prime(int n){
    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }
}


int main(){

n_prime(30);
    return 0;
}