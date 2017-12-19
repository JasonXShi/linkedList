#include "Node.h"
#include "Student.h"
#include <cstdlib>

using namespace std;

Node::Node(){
    next = NULL;
    last = NULL;
}

Node::~Node(){
/*
 * delete 
 *
 */
}

void Node::setStudent(Student* newStudent){
    student = newStudent;
}

Student* Node::getStudent(){
    return student;
}

void Node::setNext(Node* newNode){
    next = newNode;
}

Node* Node::getNext(){
    return next;
}

void Node::setLast(Node* newNode){
    last = newNode;
}

Node* Node::getLast(){
    return last;
}
