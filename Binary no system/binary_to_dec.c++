#include<iostream>
using namespace std;

void binary_to_dec(int num){
    int temp=num;
    int dec_no=0;
    int pow =1; // 2^0 =1;

    while(temp > 0){
    int last_digit=temp%10;
    dec_no=dec_no+last_digit*pow;    
    pow=pow*2;    
    temp=temp/10;
    }
    cout<<dec_no<<endl;
}



void dec_to_bin(int num){
    int temp=num;
    int pow=1;
    int bin_no=0;

    while(temp>0){
        int rem=temp%2;
        bin_no += rem * pow;
        temp=temp/2;
        pow=pow*10;
    }
    cout<<bin_no;
}

int main(){
binary_to_dec(100101);
dec_to_bin(37);
    return 0;
}