#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

void LinkedList::AddNode(Node* head, Node* Temp,int num, int count)
{
    
    while(Temp->next!=NULL)
    {
        Temp=Temp->next;
    }
    
    Temp->next=new Node;
    Temp->data=num;
    Temp->occurance=count;
    Temp->next->next=NULL;
}

void LinkedList::RemoveNode(Node* head, Node* Temp , Node* p)
{
    
    while(p->next!=NULL)
    {
        p=p->next;
        Temp=Temp->next;
    }
    
    delete Temp->next;
    Temp->next=NULL;
    
}

void LinkedList::Printlist(Node* head, Node* Temp)
{
    
    while(Temp->next!=NULL)
    {
        cout<<"Num: "<<Temp->data<<" occurance: "<<Temp->occurance<<endl;
        Temp=Temp->next;
    }
}

LinkedList LinkedList::create(LinkedList q, vector<int> v, int size, Node* head, Node* Temp, vector <int> v2)
{
    int count;
   
       for(int i=0 ; i<size ; i++)
       {
           count=0;
           
           for(int j=0 ; j<size ; j++)
           {
               if(v.at(i)==v.at(j))
               {
                   count++;
               }
               
           }
           q.AddNode(head, Temp, v[i],count);
       }
   
    
    return q;
}

int LinkedList::sum_nodes(Node* head, Node* Temp)
{
    int sum=0;
    
    while(Temp->next!=NULL)
    {
        sum=sum+(Temp->data*Temp->occurance);
        Temp=Temp->next;
    }
    
    return sum;
}
