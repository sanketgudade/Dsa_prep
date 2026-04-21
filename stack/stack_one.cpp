#include<stack>
#include<iostream>

using namespace std;

int main(){
       cout<<"This is my first stack program....."<<endl;

       stack<int> st;
       st.push(5);
       st.push(10);
       st.push(222);
       //st.pop();


       stack<int>temp=st;
       while(!temp.empty()){
        cout<<temp.top() <<" "<<endl;
        temp.pop();
       }
       

    return 0;
}