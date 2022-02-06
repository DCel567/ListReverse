#pragma once
#include <iostream>

class Node{
public:
    Node* next_node = nullptr;
    int32_t value;

    Node(int32_t new_value);
    Node();
};


class LinkedList{
public:
    Node* head;
    LinkedList();

    void addNode(int32_t new_value);
    void deleteLastNode();
    int32_t find_value(int32_t value);
    void print();
};