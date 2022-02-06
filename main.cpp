#include <iostream> 
#include <vector>

#include "List.hpp"


Node* reverse_list(Node* head){
    Node* prevNode = nullptr;
    Node* currNode = head;
    Node* nextNode;

    while (currNode != nullptr){
        nextNode = currNode->next_node;
        currNode->next_node = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    return prevNode;
}


int main(){

    LinkedList listA;

    listA.addNode(15);
    listA.addNode(16);
    listA.addNode(21);
    listA.addNode(21);
    listA.addNode(21);
    std::cout << "Our connected list: " << std::endl;
    listA.print();
    std::cout << "\n\n" << "Our reversed list: " << std::endl;

    listA.head = reverse_list(listA.head);

    listA.print();
    
}