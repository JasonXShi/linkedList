#include "Node.h"
#include <iostream>

using namespace std;

int main() {
    Student* student = new Student();
    Node* first = new Node(student);
    Node* second = new Node(student);
    first->setNext(second);
    cout << first->getStudent();
    cout<< first->getNext()->getStudent();
}
