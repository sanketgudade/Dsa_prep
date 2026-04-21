#include<iostream>
using namespace std;

int main(){

    int n1;
    int n2;
    int sum;
    int sub;
    int mul;
    float div;
 int choice;  
cout<<"This is Menu system Using switch statement"<<endl;
cout<<"1 . Addition"<<endl;
cout<<"2 . Substraction"<<endl;
cout<<"3 . Multiplication "<<endl;
cout<<"4 . Devision"<<endl;
cout<<"5 . Exit"<<endl;



while(true){
    cout<<"Enter Two numbers "<<endl;

    cout<<"Enter Number 1"<<endl;
    cin>>n1;
    cout<<"Enter Number 2"<<endl;
    cin>>n2;
    
cout<<"Select one option from above "<<endl;
cin>>choice;
switch(choice){

    case 1:
          cout<<"Addition"<<endl;
          sum=n1+n2;
          cout<<sum<<endl;
          break;
    case 2:
          cout<<"Substraction"<<endl;
          sub=n1-n2;
          cout<<sub<<endl;
          break;      
    case 3:
          cout<<"3 . Multiplication"<<endl;
          mul=n1*n2;
          cout<<mul<<endl;
          break;

    case 4:
           cout<<"3 . Division"<<endl;
          if(n2==0){
            cout<<"Devision By zero Not Possible"<<endl;
            return -1;
          }
          else {
            div=n1/n2;
            cout<<div;
          }
         
          
          break;
    case 5:
          exit(0);      
    default:
           cout<<"Invalid SUbject choosed Please select subject from above!" ;     
}
}
}