#include<iostream>
using namespace std;
#include<stack>


void delete_second_el(stack<int>& st){

    int first_el=st.top();
    st.pop();        // 1st element i.e. stored in first_el var is deleted 
    st.pop();        // 2nd element deleted 
    st.push(first_el);

}
int main(){



stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);      // second element
st.push(50);      // 1st element 
delete_second_el(st);

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

    return 0;
}




// #include<iostream>
// #include<stack>
// using namespace std;

// void delete_second_element(stack<int>& st){

//     if(st.size()<2) return ;

//     int first_element=st.top();

//     st.pop();   // first element i.e top deleted 
//     st.pop();   // second element deleted 
//     st.push(first_element);

// }

// int main(){

//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     delete_second_element(st);

//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }


//     return 0;
// }