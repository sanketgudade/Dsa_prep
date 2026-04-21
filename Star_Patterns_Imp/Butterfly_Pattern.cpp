#include<iostream>
using namespace std;

int main(){
cout<<"Butterfly Star Pattern "<<endl;



int n=14;
for(int i=0;i<=n;i++){

    for(int j=1;j<=i;j++){  // stars 
    cout<<"*";
  

    }

    for(int k=1;k<=2*(n-i); k++){

        cout<<" "  ;  }


 for(int j=1;j<=i;j++){  // stars 
    cout<<"*";
  

    }
    cout<<endl;

}








for(int i=n;i>=1;i--){

    for(int j=1;j<=i;j++){  // stars 
    cout<<"*";
  

    }

    for(int k=1;k<=2*(n-i); k++){

        cout<<" "  ;  }


 for(int j=1;j<=i;j++){  // stars 
    cout<<"*";
  

    }
    cout<<endl;

}

    return 0;
}