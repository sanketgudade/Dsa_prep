#include<iostream>
using namespace std;

bool is_even(int a){

    if(a%2!=0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int num=105;
if(is_even(num)){
    cout<<"The number is even "<<endl;
}
else{
    cout<<"The number is Not even "<<endl;
    
}
}