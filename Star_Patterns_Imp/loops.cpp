#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    if (N < 2) {
        cout << "N should be at least 2" << endl;
        return 0;
    }

    int num1 = 0, num2 = 1;
    cout << num1 << " " << num2 << " ";

    for (int i = 3; i <= N; i++) {
        int next = num1 + num2;
        cout << next << " ";
        num1 = num2;
        num2 = next;
    }

    return 0;
}
