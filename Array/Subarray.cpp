#include<iostream>
#include <climits>
using namespace std;

int main(){


int arr[6]={2,-3,6,-5,4,2};
int max_sum=INT_MIN;
int n=sizeof(arr)/sizeof(arr[0]);
for(int start=0;start<n;start++){
for(int end=start; end<n;end++){
    int current_sum=0;
    //cout<<"("<<start<<","<<end<<") "; 

    for(int i=start;i<=end;i++){
        current_sum=current_sum+arr[i];
        //cout<<arr[i];
         }
        cout<<current_sum<<" ";
        max_sum=max(current_sum,max_sum);

       
}

 cout<<" ";
cout<<endl;

   
}



 cout<<max_sum;
    return 0;
}