#include "Node.h"

Node::Node(){
    next = null;
    last = null;
}

Node::~Node(){
/*
 * delete 
 *
 */
}

void setStudent(Student* newStudent){
    student = newStudent;
}

Student* getStudent(){
    return student;
}

void setNext(Node* newNode){
    next = newNode;
}

Node* getNext(){
    return next;
}

void setLast(Node* newNode){
    last = newNode;
}

Node* getLast(){
    return last;
}
