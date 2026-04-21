#include<iostream>
using namespace std;

class stackImpl {

    int top = -1;
    int st[10];

public:   //  IMPORTANT

    void push(int x) {
        if(top >= 9) {
            cout << "STACK FULL\n";
            return;   //  stop
        }
        top++;
        st[top] = x;
    }

    void pop() {
        if(top == -1) {
            cout << "STACK EMPTY\n";
            return;   //  stop
        }
        top--;
    }

    int topp() {
        if(top == -1) return -1;
        return st[top];
    }

    int size() {
        return top + 1;   //  fixed
    }
};

int main() {

    stackImpl sst;   //  object created

    sst.push(10);
    sst.push(20);

    cout << "Top: " << sst.topp() << endl;
    cout << "Size: " << sst.size() << endl;

    sst.pop();

    cout << "Top after pop: " << sst.topp() << endl;

    return 0;
}