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
        Node* new_node=new Node(val);
        Node* temp=head;
        // move to the previous of x node  
        if(head==NULL){    // if head is null can determine where to put this node
            return NULL;
         }
        if(head->data==x){
           new_node->next=head;
           head=new_node;
           return head;
        }
         while(temp->next!=NULL){
         
            if(temp->next->data==x){
                new_node->next=temp->next;
                temp->next=new_node;
                return head; // stop after first insertion 
            }
           temp=temp->next;
        }
        return head;
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

    Solution obj;

    // TC1: Insert in middle
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);

        head = obj.insertBeforeValue(head, 2, 9);

        if (head->data == 1 &&
            head->next->data == 9 &&
            head->next->next->data == 2 &&
            head->next->next->next->data == 3)
            cout << "TC1: PASS\n";
        else
            cout << "TC1: FAIL\n";
    }

    // TC2: Insert before head
    {
        Node* head = new Node(5);
        head->next = new Node(10);
        head->next->next = new Node(15);

        head = obj.insertBeforeValue(head, 5, 2);

        if (head->data == 2 &&
            head->next->data == 5 &&
            head->next->next->data == 10 &&
            head->next->next->next->data == 15)
            cout << "TC2: PASS\n";
        else
            cout << "TC2: FAIL\n";
    }

    // TC3: Insert before last node
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);

        head = obj.insertBeforeValue(head, 3, 8);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 8 &&
            head->next->next->next->data == 3)
            cout << "TC3: PASS\n";
        else
            cout << "TC3: FAIL\n";
    }

    // TC4: x does not exist
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);

        head = obj.insertBeforeValue(head, 7, 9);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 3 &&
            head->next->next->next == NULL)
            cout << "TC4: PASS\n";
        else
            cout << "TC4: FAIL\n";
    }

    // TC5: Empty list
    {
        Node* head = NULL;

        head = obj.insertBeforeValue(head, 5, 10);

        if (head == NULL)
            cout << "TC5: PASS\n";
        else
            cout << "TC5: FAIL\n";
    }

    // TC6: Duplicate x - first occurrence
    {
        Node* head = new Node(1);
        head->next = new Node(5);
        head->next->next = new Node(5);
        head->next->next->next = new Node(7);

        head = obj.insertBeforeValue(head, 5, 9);

        if (head->data == 1 &&
            head->next->data == 9 &&
            head->next->next->data == 5 &&
            head->next->next->next->data == 5 &&
            head->next->next->next->next->data == 7)
            cout << "TC6: PASS\n";
        else
            cout << "TC6: FAIL\n";
    }

    // TC7: Single node, x found
    {
        Node* head = new Node(10);

        head = obj.insertBeforeValue(head, 10, 5);

        if (head->data == 5 &&
            head->next->data == 10 &&
            head->next->next == NULL)
            cout << "TC7: PASS\n";
        else
            cout << "TC7: FAIL\n";
    }

    // TC8: Single node, x not found
    {
        Node* head = new Node(10);

        head = obj.insertBeforeValue(head, 20, 5);

        if (head->data == 10 &&
            head->next == NULL)
            cout << "TC8: PASS\n";
        else
            cout << "TC8: FAIL\n";
    }

    // TC9: Insert before second node
    {
        Node* head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);

        head = obj.insertBeforeValue(head, 20, 15);

        if (head->data == 10 &&
            head->next->data == 15 &&
            head->next->next->data == 20 &&
            head->next->next->next->data == 30 &&
            head->next->next->next->next->data == 40)
            cout << "TC9: PASS\n";
        else
            cout << "TC9: FAIL\n";
    }

    // TC10: Insert before third node
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);
        head->next->next->next = new Node(4);

        head = obj.insertBeforeValue(head, 3, 99);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 99 &&
            head->next->next->next->data == 3 &&
            head->next->next->next->next->data == 4)
            cout << "TC10: PASS\n";
        else
            cout << "TC10: FAIL\n";
    }

    // TC11: Negative values
    {
        Node* head = new Node(-10);
        head->next = new Node(-5);
        head->next->next = new Node(0);

        head = obj.insertBeforeValue(head, -5, -7);

        if (head->data == -10 &&
            head->next->data == -7 &&
            head->next->next->data == -5 &&
            head->next->next->next->data == 0)
            cout << "TC11: PASS\n";
        else
            cout << "TC11: FAIL\n";
    }

    // TC12: All values same
    {
        Node* head = new Node(5);
        head->next = new Node(5);
        head->next->next = new Node(5);

        head = obj.insertBeforeValue(head, 5, 9);

        if (head->data == 9 &&
            head->next->data == 5 &&
            head->next->next->data == 5 &&
            head->next->next->next->data == 5)
            cout << "TC12: PASS\n";
        else
            cout << "TC12: FAIL\n";
    }

    // TC13: x = 0
    {
        Node* head = new Node(1);
        head->next = new Node(0);
        head->next->next = new Node(2);

        head = obj.insertBeforeValue(head, 0, 99);

        if (head->data == 1 &&
            head->next->data == 99 &&
            head->next->next->data == 0 &&
            head->next->next->next->data == 2)
            cout << "TC13: PASS\n";
        else
            cout << "TC13: FAIL\n";
    }

    // TC14: val = 0
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);

        head = obj.insertBeforeValue(head, 3, 0);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 0 &&
            head->next->next->next->data == 3)
            cout << "TC14: PASS\n";
        else
            cout << "TC14: FAIL\n";
    }

    // TC15: Negative x
    {
        Node* head = new Node(5);
        head->next = new Node(-2);
        head->next->next = new Node(8);

        head = obj.insertBeforeValue(head, -2, 100);

        if (head->data == 5 &&
            head->next->data == 100 &&
            head->next->next->data == -2 &&
            head->next->next->next->data == 8)
            cout << "TC15: PASS\n";
        else
            cout << "TC15: FAIL\n";
    }

    // TC16: Negative val
    {
        Node* head = new Node(5);
        head->next = new Node(10);
        head->next->next = new Node(15);

        head = obj.insertBeforeValue(head, 15, -100);

        if (head->data == 5 &&
            head->next->data == 10 &&
            head->next->next->data == -100 &&
            head->next->next->next->data == 15)
            cout << "TC16: PASS\n";
        else
            cout << "TC16: FAIL\n";
    }

    // TC17: Large values
    {
        Node* head = new Node(100000);
        head->next = new Node(200000);
        head->next->next = new Node(300000);

        head = obj.insertBeforeValue(head, 300000, 999999);

        if (head->data == 100000 &&
            head->next->data == 200000 &&
            head->next->next->data == 999999 &&
            head->next->next->next->data == 300000)
            cout << "TC17: PASS\n";
        else
            cout << "TC17: FAIL\n";
    }

    // TC18: x is first among many nodes
    {
        Node* head = new Node(7);
        head->next = new Node(8);
        head->next->next = new Node(9);
        head->next->next->next = new Node(10);
        head->next->next->next->next = new Node(11);

        head = obj.insertBeforeValue(head, 7, 6);

        if (head->data == 6 &&
            head->next->data == 7 &&
            head->next->next->data == 8 &&
            head->next->next->next->data == 9 &&
            head->next->next->next->next->data == 10 &&
            head->next->next->next->next->next->data == 11)
            cout << "TC18: PASS\n";
        else
            cout << "TC18: FAIL\n";
    }

    // TC19: x is last among many nodes
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);
        head->next->next->next = new Node(4);
        head->next->next->next->next = new Node(5);

        head = obj.insertBeforeValue(head, 5, 99);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 3 &&
            head->next->next->next->data == 4 &&
            head->next->next->next->next->data == 99 &&
            head->next->next->next->next->next->data == 5)
            cout << "TC19: PASS\n";
        else
            cout << "TC19: FAIL\n";
    }

    // TC20: x not found in long list
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);
        head->next->next->next = new Node(4);
        head->next->next->next->next = new Node(5);

        head = obj.insertBeforeValue(head, 100, 50);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 3 &&
            head->next->next->next->data == 4 &&
            head->next->next->next->next->data == 5 &&
            head->next->next->next->next->next == NULL)
            cout << "TC20: PASS\n";
        else
            cout << "TC20: FAIL\n";
    }

    // TC21: x at second position with duplicate later
    {
        Node* head = new Node(1);
        head->next = new Node(5);
        head->next->next = new Node(3);
        head->next->next->next = new Node(5);

        head = obj.insertBeforeValue(head, 5, 8);

        if (head->data == 1 &&
            head->next->data == 8 &&
            head->next->next->data == 5 &&
            head->next->next->next->data == 3 &&
            head->next->next->next->next->data == 5)
            cout << "TC21: PASS\n";
        else
            cout << "TC21: FAIL\n";
    }

    // TC22: x at head with duplicates
    {
        Node* head = new Node(5);
        head->next = new Node(2);
        head->next->next = new Node(5);

        head = obj.insertBeforeValue(head, 5, 99);

        if (head->data == 99 &&
            head->next->data == 5 &&
            head->next->next->data == 2 &&
            head->next->next->next->data == 5)
            cout << "TC22: PASS\n";
        else
            cout << "TC22: FAIL\n";
    }

    // TC23: Insert same value as x
    {
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);

        head = obj.insertBeforeValue(head, 2, 2);

        if (head->data == 1 &&
            head->next->data == 2 &&
            head->next->next->data == 2 &&
            head->next->next->next->data == 3)
            cout << "TC23: PASS\n";
        else
            cout << "TC23: FAIL\n";
    }

    // TC24: Insert before second node in 2-node list
    {
        Node* head = new Node(10);
        head->next = new Node(20);

        head = obj.insertBeforeValue(head, 20, 15);

        if (head->data == 10 &&
            head->next->data == 15 &&
            head->next->next->data == 20)
            cout << "TC24: PASS\n";
        else
            cout << "TC24: FAIL\n";
    }

    // TC25: Insert before first node in 2-node list
    {
        Node* head = new Node(20);
        head->next = new Node(30);

        head = obj.insertBeforeValue(head, 20, 10);

        if (head->data == 10 &&
            head->next->data == 20 &&
            head->next->next->data == 30)
            cout << "TC25: PASS\n";
        else
            cout << "TC25: FAIL\n";
    }

    // TC26: x and val both negative
    {
        Node* head = new Node(-10);
        head->next = new Node(-20);
        head->next->next = new Node(-30);

        head = obj.insertBeforeValue(head, -30, -25);

        if (head->data == -10 &&
            head->next->data == -20 &&
            head->next->next->data == -25 &&
            head->next->next->next->data == -30)
            cout << "TC26: PASS\n";
        else
            cout << "TC26: FAIL\n";
    }

    return 0;
}