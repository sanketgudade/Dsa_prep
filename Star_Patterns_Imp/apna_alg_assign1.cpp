
//---------progarm 1
//----------- +ve -ve 0 ----------------------
// #include<iostream>
// using namespace std;

// int main(){
// int a;
// cout<<"Enter a number"<<endl;
// cin>>a;
// if(a<0){
// cout<<"The number is -ve"<<endl;
// }
// else if(a>0){
//     cout<<"The number is +ve"<<endl;
// }
// else{
//     cout<<"The number is 0"<<endl;
    
// }
// }



//------program 2
// -----------------------leap year--------------------

//  #include<iostream>
//  using namespace std;



// bool leap_leap(int year){
//     if((year%4==0 && year%100!=0) || (year%400==0) ){
//     return true;
// }
// else{
//     return false;

// }

// }
// int main(){
// int year;
// cout<<"Enter the year"<<endl;
// cin>>year;



//     if(leap_leap(year))
//         cout << year << " is a leap year" << endl;
//     else
//         cout << year << " is not a leap year" << endl;

// return 0;


// }

//---------progarm 3
//---------Amstrong number with string conversion  ------------------------
// #include <iostream>
// #include <cmath>
// using namespace std;

// int power_funct(int num1, int power_element){
//     int result=1;
//     for(int i=0; i < power_element; i++){
//          result=result*num1;
//     }
//         return result;

// }
// int main() {
//     int num, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//    string num_string= to_string(num);
//    int length_num=num_string.length();
   

//    for(int i=0;i<length_num;i++){
//     int digit=num_string[i]-'0';
//     sum=sum+power_funct(digit,length_num);
//    }
//   cout<<sum;

//     return 0;
// }

//---------progarm 3 2nd version
//---------Amstrong number without string conversion ------------------------
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    int sum=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int length=0;
    int temp=num;

    while(temp!=0){
        length=length+1;
        temp=temp/10;
    }
    cout<<"length :"<<length<<endl;
  //  return 0;
   int  temp2=num;
    while(temp2!=0){
        int digit=temp2%10;
         sum=sum+(int)pow(digit , length);
        temp2=temp2/10;
    }

    cout<<sum;
    return 0;
}

