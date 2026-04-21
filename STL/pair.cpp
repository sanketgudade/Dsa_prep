#include<iostream>
using namespace std;
#include<utility>

void pair_exaple(){

    pair<int ,string> p={1,"Sanket"};
    pair<int ,pair<int ,int>> p2={1,{2,3}};

    cout<<p.first <<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second.first <<" "<<p2.second.second<<endl;
    pair <int ,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].second;
     
}

int main(){

pair_exaple();
    return 0;
}