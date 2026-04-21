#include<iostream>
using namespace std;

// 1111
// 2222
// 3333
// 4444

// no of rows ---->4
// no of colums or each row have ---->4 elements 4 colums 

// outer loop --->row;
// inner loop --->column
int main(){
//     for(int i=1; i<=4; i++){
        
//     for(int j=1 ; j<=4 ; j++){
//     cout<<j;
//     }
//     cout<<endl;

// }
//     return 0;



// *
// **
// ***
// ****

// for(int i=1;i<=4;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
       
//     }
//     cout<<endl;
// }
// int n=4;

// for(int i=1;i<=4;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// char ch='A';
// for(int i=0;i<4;i++){
//     for(int j=0;j<=i;j++){
//         cout<<ch;
//         ch=ch+1;
//     }
//     cout<<endl;
// }

// for(int i=1;i<=4;i++){
//     for(int i=1;i<=n;i++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// return 0;

// for(int i=1;i<=n;i++){
//     cout<<"*";          //first star;

// for(int j=1;j<=n-1;j++){
//     if(i==1 || i==n){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
// }

//     cout<<"*" << endl;         // last star;
// }




// int n=4;

// for(int i=0;i<n;i++){
//     cout<<"*";    // first 

// for(int j=0; j<n-1; j++){
//     if(i==0 || i==n-1){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
// }


//     cout<<"*"<<endl;

// }
//     return 0;




int  n=5;

for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){

        cout<<" ";
    }
    for(int k=1;k<=i;k++){
    cout<<"*";
    }
    cout<<endl;

}
return 0;
}