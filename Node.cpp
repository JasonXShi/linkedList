//implementation for Node

//import stuff
#include "Node.h"
#include "Student.h"
#include <cstdlib>

using namespace std;
//constructor sets the next and last to null, and initializes the node's data (student*)
Node::Node(Student* newStudent){
    next = NULL;
    last = NULL;
    student = newStudent;
}
//destructor deleles the student pointer
Node::~Node(){
    delete student;
}
//sets the student (if you want to change it later)
void Node::setStudent(Student* newStudent){
    student = newStudent;
}
//returns the student pointer that the node is containing
Student* Node::getStudent(){
    return student;
}
//sets the next node
void Node::setNext(Node* newNode){
    next = newNode;
}
//tells us the next node
Node* Node::getNext(){
    return next;
}
//sets the last node
void Node::setLast(Node* newNode){
    last = newNode;
}
//tells us the last node
Node* Node::getLast(){
    return last;
}
