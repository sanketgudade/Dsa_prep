#include<iostream>
using namespace std;

int main(){

    int arr[10]={1,2,31,4,5};
     
    int max_element=arr[0];
     for(int i=0;i<5;i++){
       if(arr[i]>max_element){
        max_element=arr[i];
       }
     }


        cout<<max_element;
    return 0;
}