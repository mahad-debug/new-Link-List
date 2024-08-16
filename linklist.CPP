#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    public: 
    node(int head){
        data = head;
        next = NULL;
    }
};
void pushback(node* &header,int val){
    node* n1 = new node(val);
    if(header==NULL){
        header=n1;
        return;
    }
     node* tem = header;
    while(tem->next!=NULL){
        tem=tem->next;
    }
    tem->next=n1;
}
 
  void insertNode(node* &header, int checkNum, int firstnode) {
    node* insert = new node(firstnode);
    node* itr = header;
    while (itr != NULL) {
        std::cout << "Address of n1: " << itr << std::endl;
        if (itr->data == checkNum) {
            // itr->data = 6;
            std::cout << "itr->data  "<<itr->data << std::endl;
            std::cout << "itr->next  " <<itr->next<< std::endl;
            insert->next = itr->next;
            itr->next = insert;
            std::cout << "Inserted node: " << itr->next << std::endl;
            std::cout << "Connected insert node to n2: " << insert << std::endl;
            return;
        }
        itr = itr->next;
    }
}
 
void updateNode(node* head, int checkNum1, int numberdata){
    // node* n1 = new node(n);
    node* itr = head;
    while(itr != NULL){
        if(itr->data == checkNum1){
            itr->data = numberdata;
            std::cout << "data has been changed     "<< itr->data << std::endl;
            return;
        }
        itr= itr->next;
    }
}
 
void deleteNode(node* header, int numNode){
    node* itr = header;
    // node* before;
    // node* after;
    while(itr != NULL){
       if(itr->data==numNode){
           std::cout << "number found " << itr->data << " and numNode " << numNode  << std::endl;
           std::cout <<"itr data  "<< itr->data <<"  itr next  data "<< itr->next->data <<"   check refrence of node " << itr << "  itr->next " << itr->next <<std::endl;
           std::cout << "itr->next->next  " <<itr->next->next->data<< "            "<< itr->next->next  << std::endl;
           itr->next = itr->next->next;
           std::cout << "now " << itr << std::endl;
           return;
       }
        // before->next = after;
        // //after = after->next;
        // std::cout << "they are connected"<< before->next << std::endl;
        // std::cout << "they are connected"<< after << std::endl;
        // std::cout <<"connected" << itr << std::endl;
        // std::cout << "data"<< itr->data << std::endl;
        // std::cout << "next"<< before->data << std::endl;
        // std::cout << "after"<< after->data << std::endl;
        // return;
 
    }
    //   after = after->next;
    //   std::cout << "after"<< after->data << std::endl;
    itr=itr->next;
}
 
void showfun(node* header){
    while(header!=NULL){
        std::cout << header->data << std::endl;
        header=header->next;
    }
    cout<<endl;
}
int main()
{
   node* heada =NULL;
   pushback(heada,3);
   pushback(heada,4);
   pushback(heada,8);
   insertNode(heada, 4, 10);
   updateNode(heada, 4, 6);
   showfun(heada);
   deleteNode(heada, 3);
   showfun(heada);
   //insertNode(NULL, 5, 10)
    // node* nodes1 = new node(8);
    // nodes1->connectingNode(3);
    // node* nodes2 = new node(7);
    // nodes2->connectingNode(5);
    // node* nodes3 = new node(9);
    // nodes3->connectingNode(3);
    // node* nodes4 = new node(10);
    // std::cout << nodes  << std::endl;
    // std::cout << nodes->next->data << std::endl;
    // std::cout << &nodes << std::endl;
    // nodes->next = nodes1;
    // nodes1->next = nodes2;
    // nodes2->next = nodes3;
    // nodes3->next = nodes4;
    // std::cout << nodes->data  << std::endl;
    // std::cout << nodes->next->data  << std::endl;
    // std::cout << nodes->next  << std::endl;
    // std::cout << nodes1  << std::endl;
    // std::cout << nodes1->next->data  << std::endl;
    // std::cout << nodes1->next  << std::endl;
    // std::cout << nodes2  << std::endl;
    // std::cout << nodes2->next->data  << std::endl;
    // std::cout << nodes2->next  << std::endl;
    // std::cout << nodes3  << std::endl;
    // std::cout << nodes3->next->data  << std::endl;
    // std::cout << nodes3->next  << std::endl;
    // std::cout << nodes4  << std::endl;
    // std::cout << nodes1->next->data << std::endl;
    // std::cout << &nodes1 << std::endl;
    // node* n = new node(5);
    // std::cout << n << std::endl;
    // node* e = new node(6);
    // std::cout << e << std::endl;
    // std::cout << n->data << std::endl;
    // std::cout << n->next << std::endl;
    // std::cout << &n << std::endl;
    // n->next= e;
    // std::cout << n->next << std::endl;
    // std::cout << n->next->data << std::endl;


 
    return 0;
}