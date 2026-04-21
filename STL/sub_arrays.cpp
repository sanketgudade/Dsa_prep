#include<iostream>
using namespace std;




 void print_sub_array(int *arr,int n){
        for(int i=0;i<n;i++){
          for( int j=i; j<n;j++){
            cout<<"("<<i<<","<<j<<")"<<endl;
          } 
           cout<<endl;
        }
    }



int main(){


   cout<<("HERE WE ARE PRINTING SUBARRAYS OF ARRAY.");

   int arr[5]={1,2,3,4,5};
   int n=5;

print_sub_array(arr,n);
    return 0;
}