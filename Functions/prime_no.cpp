#include<iostream>
using namespace std;

bool is_prime(int num){
    if(num==1 or num<=0){
        return false ;
    }

    for(int i=2;i*i<num;i++){
        if(num%i==0){
          return false;
        }
    }
    return true;
   
}



int main(){

int num;
cout<<"Enter a number"<<endl;
cin>>num;
if(is_prime(num)){
    cout<<"THE NUMBER IS PRIME"<<endl;
}
else{
    cout<<"THE NUMBER IS NOT PRIME"<<endl;

}
}