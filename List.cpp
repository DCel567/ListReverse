#include "List.hpp"


Node::Node(int32_t new_value){
    value = new_value;
}

Node::Node(){
    value = 0;
}

LinkedList::LinkedList(){
    head = nullptr;
}

void LinkedList::addNode(int32_t value){
    Node* newNode = new Node(value);

    if (this->head == nullptr){
        this->head = newNode;
        return;
    }

    Node* currNode = this->head;
    while (currNode->next_node != nullptr)
        currNode = currNode->next_node;
    
    currNode->next_node = newNode;
}

void LinkedList::print(){
    Node* curr_node = head;

    while (curr_node != nullptr){
        std::cout << curr_node->value << " ";
        curr_node = curr_node->next_node;
    }
}
