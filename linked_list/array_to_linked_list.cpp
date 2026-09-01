#include<iostream>
#include <iterator>
using namespace std;
// creating node structure
class Node{
    public:
    int data;                 
    Node* next;
    
    Node(int value){
        data=value;
        next=nullptr;
    }
};


int main(){

  int arr[4]={1,2,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);

  Node* head=new Node(arr[0]);
  Node*temp =head;
  //converting the ARRAY to the LINKLIST

  for(int i=1;i<n;i++){
    temp->next=new Node(arr[i]);
    temp=temp->next;
  }
  
  //Printing the array
  //bring the temp to head again which is present at the end now

  temp=head;

  while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp=temp->next;
  }

  cout<<"NULL"<<endl;


    return 0;
}