#include<iostream>
#include<stack>
using namespace std;

void delete_second_element(stack<int>& st){

    if(st.size()<2) return ;

    int first_element=st.top();

    st.pop();   // first element i.e top deleted 
    st.pop();   // second element deleted 
    st.push(first_element);

}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);

    delete_second_element(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}