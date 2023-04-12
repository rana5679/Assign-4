#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"
#include <vector>
using namespace std;

class LinkedList
{
public:
    void AddNode(Node* head, Node* Temp,int num,int count);
    void RemoveNode(Node* head, Node* Temp ,Node* p);
    void Printlist(Node* head, Node* Temp);
    LinkedList create(LinkedList q, vector<int> v , int size, Node* head, Node* Temp, vector <int> v2);
    int sum_nodes(Node* head, Node* Temp);
};

#endif
