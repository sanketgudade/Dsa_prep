#include <iostream>
using namespace std;

/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* insertBeforeValue(Node* head, int x, int val) {
        // Write your code here
        
    }
};

// Print linked list
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data;

        if (temp->next != NULL)
            cout << " -> ";

        temp = temp->next;
    }

    cout << endl;
}

// Create linked list
Node* createList() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* new_node = new Node(x);

        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } 
        else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    return head;
}

int main() {

    // Test Case 1
    cout << "Test Case 1:" << endl;

    Node* head = createList();

    int x, val;
    cin >> x >> val;

    Solution obj;

    head = obj.insertBeforeValue(head, x, val);

    cout << "Output: ";
    printList(head);


    // Test Case 2
    cout << "\nTest Case 2:" << endl;

    head = createList();

    cin >> x >> val;

    head = obj.insertBeforeValue(head, x, val);

    cout << "Output: ";
    printList(head);


    return 0;
}