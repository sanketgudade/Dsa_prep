#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){

        // spaces
        for(int s = 1; s <= n - i; s++){
            cout << " ";
        }

        // descending
        for(int j = i; j >= 1; j--){
            cout << j;
        }

        // ascending
        for(int j = 2; j <= i; j++){
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
