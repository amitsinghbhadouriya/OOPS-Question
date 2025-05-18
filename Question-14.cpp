#include <iostream>
using namespace std;

class Stack {
    private: int arr[10], top;

    public:
        Stack() {
            top =-1;
        }

        void push(int value) {
            if(top == 9) {
                cout << "Overflow: Stack is full, cannot push " << value << endl;
            }
            else {
                top++;
                arr[top] = value;
                cout << value << " pushed onto stack." << endl;
            }
        }

        void pop() {
            if(top == -1) {
                cout << "Underflow: Stack is empty, cannot pop." << endl;
            }
            else {
                cout << arr[top] << " popped from stack." << endl;
                top--;
            }
        }

        void peek() const {
            if(top == -1) {
                cout << "Stack is empty." << endl;
            }
            else {
                cout << "Top element is: " << arr[top] << endl;
            }
        }

        bool isEmpty() const {
            return top == -1;
        }

        bool isFull() const {
            return top == 9;
        }

        void display() const {
            if(top == -1) {
                cout << "Stack is empty." << endl;
            }
            else {
                cout << "Stack elements: ";
                for(int i=0; i<=top; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.display();
    stack.pop();
    stack.pop();
    stack.peek();
    stack.push(60);
    stack.display();
    for(int i=0; i<10; i++) {
        stack.push(i*10);
    }
    stack.push(100);
    while(!stack.isEmpty()) {
        stack.pop();
    }
    stack.pop();
    return 0;
}