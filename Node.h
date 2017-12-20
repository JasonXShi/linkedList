//this is the header file for a node

//header guards and importing stuff
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"

using namespace std;
//defines the public and private functions and variables
class Node{
    public:
        //constructor
        Node(Student* newStudent);
        //destructor
        ~Node();
        //makes setters and getters
        void setStudent(Student* newStudent);
        Student* getStudent();
        void setNext(Node* newNode);
        Node* getNext();
        void setLast(Node* newNode);
        Node* getLast();
    private:
        //intializes the variables
        Student* student;
        Node* next;
        Node* last;
};
#endif


