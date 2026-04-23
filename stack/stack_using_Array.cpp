#include<iostream>
using namespace std;
#define MAX 10


class stack_impl{

    int arr[MAX];
    int top;



public: 
stack_impl(){
top=-1;
}

bool isfull(){
    return top==MAX-1;
}


bool isEmpty(){
    return top==-1;
    
}


void push(int x){
    if(isfull()) {
        cout<<"The stack is full cannot push the element!"<<endl;
    }
    else{
        arr[++top]=x;
    }
}


void pop(){
    if(isEmpty()){
        cout<<"The stack is empty cannot pop!"<<endl;
    }
    else{
        arr[top--];
    }
}

void peek(){
    if(isEmpty()){
        cout<<"The stack is empty no Top element to show!"<<endl;
    }
    else{
        cout<<arr[top];
    }
}

void display(){
    while(!isEmpty()){
        cout<<arr[top];
    }
}


};           // after class in cpp ; needed okkkkkkk!!!!!!
  


int main(){


    return 0;
}