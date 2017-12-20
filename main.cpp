/*  This can be used to test if the node works as intended
*   12/20/17
*   Written by: Jason Shi
*/

//imports stuff
#include "Node.h"
#include <iostream>

using namespace std;

int main() {
    //makes a student*
    Student* student = new Student();
    //makes nodes with the student* 
    Node* first = new Node(student);
    Node* second = new Node(student);
    //sets nodes to containt which node is the last and next
    first->setNext(second);
    //checks if getStudent works
    cout << first->getStudent();
    cout<< first->getNext()->getStudent();
    
    //i did some more testing i just removed it after i made sure it worked
    //oops probably should've commented it out instead
}
